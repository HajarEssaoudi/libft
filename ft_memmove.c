/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajar <hajar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 20:12:54 by hajar             #+#    #+#             */
/*   Updated: 2024/10/03 02:10:53 by hajar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*pdest;
	const char	*psrc;
	char		*ptmp;

	i = 0;
	pdest = (char *)dest;
	psrc = (const char *)src;
	ptmp = (char *)malloc(n * sizeof(char));
	while (i < n)
	{
		ptmp[i] = psrc[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		pdest[i] = ptmp[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
int main() {
    char data[] = "Hello, World!";
	char data1[] = "Hello, World!";

    ft_memmove(data + 5, data + 7, 6);
    printf("Using memcpy: %s\n", data);
	
    memmove(data1 + 5, data1 + 7, 6);
    printf("Using memmove: %s\n", data);

    return 0;
}
*/
