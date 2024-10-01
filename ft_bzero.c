/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajar <hajar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 04:08:10 by hajar             #+#    #+#             */
/*   Updated: 2024/10/01 15:16:05 by hajar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *)s;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

/*

#include<stdio.h>
#include <string.h>

int main() {
	char buffer[5];
	char buffer2[5];
	int i = 0;
	
	// Initialize buffers
	bzero(buffer, sizeof(buffer));
	ft_bzero(buffer2, sizeof(buffer2));
	
	// Print contents of buffer initialized by bzero
	printf("Buffer from bzero: ");
	while (i < sizeof(buffer)) {
		printf("%d ", buffer[i]);
		i++;
	}

	i = 0;  // Reset index for second buffer
	printf("\nBuffer2 from ft_bzero: ");
	while (i < sizeof(buffer2)) {
		printf("%d ", buffer2[i]);
		i++;
	}
	
	return 0;
}

*/