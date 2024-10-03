/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajar <hajar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 20:33:39 by hajar             #+#    #+#             */
/*   Updated: 2024/10/03 02:11:37 by hajar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n && *str1 && *str2 && *str1 == *str2)
	{
		str1++;
		str2++;
		i++;
	}
	if (i == n)
		return (0);
	return (*str1 - *str2);
}

/*
#include<stdio.h>
#include<string.h>
int main()
{
	unsigned char s1[] = "";
	unsigned char *s2 = "";
	printf("%d\n", ft_memcmp(s1, s2, 2));
	printf("%d\n", memcmp(s1, s2, 2));
}
*/