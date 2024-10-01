/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajar <hajar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 03:47:08 by hajar             #+#    #+#             */
/*   Updated: 2024/10/01 14:49:12 by hajar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = s;
	while (i < n)
	{
		ptr[i] = (char)c;
		i++;
	}
	return (s);
}

/*

#include <stdio.h>
#include <string.h>

int main() {
    char buffer[5];
	char buffer2[5];
	int i = 0;
	int j = 0;
	
    memset(buffer, 'A', sizeof(buffer));
	ft_memset(buffer2, 'B', sizeof(buffer2));
	
    while (i < sizeof(buffer)) {
        printf("%c ", buffer[i]);
		i++;
    }
	while (j < sizeof(buffer2)) {
        printf("%c ", buffer2[j]);
		j++;
    }
    return 0;
}

*/