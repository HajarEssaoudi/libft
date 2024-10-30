/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-saou <hes-saou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:18:59 by hes-saou          #+#    #+#             */
/*   Updated: 2024/10/25 17:52:35 by hes-saou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (str);
}

// #include <stdio.h>
// #include <string.h>
// int main ()
// {
// 	char str[10] = "hajaress";
// 	ft_memset(str, '5' , 5);
// 	printf("ft_memset(): %s\n", str);
// 	char str1[10] = "hajaress";
// 	memset(str, '5' , 5);
// 	printf("memset(): %s\n", str);
// }