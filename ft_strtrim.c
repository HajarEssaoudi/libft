/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-saou <hes-saou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:22:01 by hes-saou          #+#    #+#             */
/*   Updated: 2024/11/02 21:53:14 by hes-saou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static int	len(char const *s1)
{
	int	i;

	i = 0;
	while (s1[i])
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*p;
	int		l;
	int		i;

	i = 0;
	l = 0;
	start = 0;
	end = len(s1) - 1;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && is_set(s1[start], set))
		start++;
	while (end > start && is_set(s1[end], set))
		end--;
	l = end - start + 1;
	p = (char *)malloc(l + 1);
	if (!p)
		return (NULL);
	while (start <= end)
		p[i++] = s1[start++];
	p[i] = '\0';
	return (p);
}

// #include <stdio.h>
// #include <stdlib.h> 

// char *ft_strtrim(const char *s1, const char *set); 

// int main()
// {
//     char *trimmed_str = ft_strtrim("popo", "po");
//     printf("%s\n", trimmed_str);
//     free(trimmed_str);
//     return 0;
// }
