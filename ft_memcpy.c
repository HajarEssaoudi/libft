/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajar <hajar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:38:01 by hajar             #+#    #+#             */
/*   Updated: 2024/10/02 15:25:43 by hajar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*pdest;
	const char	*psrc;

	i = 0;
	pdest = (char *)dest;
	psrc = (const char *)src;
	while (i < n)
	{
		pdest[i] = psrc[i];
		i++;
	}
	return (dest);
}
/*

#include <stdio.h>
#include <string.h>
#include<unistd.h>

int main() {
	char src[] = "Hello, World!";
	char dest1[20];
	char dest2[20];

	memcpy(dest1, src, strlen(src) + 1);

	char *dest12 = (char *)dest1 ;
	while(*dest12)
	{
		write(1, dest12, 1);
		dest12++;
	}
	
	ft_memcpy(dest2, src, strlen(src) + 1);
	
	char *dest22 = (char *)dest2 ;
	while(*dest22)
	{
		write(1, dest22, 1);
		dest22++;
	}
	return 0;
}
*/