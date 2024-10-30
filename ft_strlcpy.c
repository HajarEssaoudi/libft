/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-saou <hes-saou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:46:33 by hes-saou          #+#    #+#             */
/*   Updated: 2024/10/26 09:57:33 by hes-saou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (src[j])
		j++;
	if (size == 0)
		return (j);
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	return (j);
}

// #include <stdio.h>
// #include<string.h>
// int main ()
// {
// 	char dst[12];
// 	const char src[] ="Hajar1 Hajar2";
// 	int j = ft_strlcpy(dst, src, 6);
// 	printf("%d, %s\n", j, dst);
// }