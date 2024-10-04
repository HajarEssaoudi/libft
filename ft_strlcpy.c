/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajar <hajar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:34:50 by hajar             #+#    #+#             */
/*   Updated: 2024/10/04 23:10:36 by hajar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while(src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}

/*
int main()
{
	char dst[2];
	const char src[5] = "Hajar";
	
	printf("%zu",ft_strlcpy(dst, src, 5));
	printf("%s", dst);
	
	size_t i = 0;
	while(i < 5)
	{
        if (dst[i] == '\0') 
            printf("%s", "oui");
    i++;
	}
   	return 0;
}
*/