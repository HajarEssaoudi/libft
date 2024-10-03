/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajar <hajar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:01:45 by hajar             #+#    #+#             */
/*   Updated: 2024/10/03 02:12:39 by hajar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*tmp;
	int		i;
	int		j;

	i = 0;
	j = -1;
	str = (char *)s;
	if (c > 255)
		c = c % 256;
	while (*str)
	{
		if (*str == (char)c)
		{
			tmp++;
			tmp = str;
		}
		str++;
	}
	if (c == '\0')
		return (str);
	return (tmp);
}

/*
#include<stdio.h>
#include<string.h>
int main()
{
	printf("%p\n", ft_strrchr("hajar",'\0'));
	printf("%p\n", strrchr("hajar",'\0'));
}
*/