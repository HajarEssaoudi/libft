/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-saou <hes-saou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 23:06:34 by hes-saou          #+#    #+#             */
/*   Updated: 2024/10/31 23:06:37 by hes-saou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countword(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count ++;
		i++;
	}
	return (count);
}

static	int	lenc(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	**free_split(char **split, int i)
{
	while (i--)
		free(split[i]);
	return (NULL);
}

static char	*alloc_word(const char **s, char c)
{
	int		j;
	char	*word;

	word = (char *) malloc(lenc(*s, c) + 1);
	j = 0;
	if (!word)
		return (NULL);
	while (**s && **s != c)
		word[j++] = *(*s)++;
	word[j] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;

	i = 0;
	split = (char **)malloc((countword(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			split[i] = alloc_word(&s, c);
			if (!split[i])
			{
				free_split(split, i);
				return (free_split(split, i));
			}
			i++;
		}
		else
			s++;
	}
	split[i] = NULL;
	return (split);
}
// #include <stdio.h>
// int main ()
// {
// 		int x;
// 		char s[] = ",hippo,,fsfs,hdjdk,drftg,fguh,,";
// 		char c = ',';
// 		char **ss = ft_split(s, c);

// 		x = 0;
// 		while (x <= 4)
// 		{
// 			printf("%s\n",ss[x]);
// 			x++;
// 		}
// }