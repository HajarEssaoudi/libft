/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-saou <hes-saou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:40:25 by hes-saou          #+#    #+#             */
/*   Updated: 2024/10/25 16:46:11 by hes-saou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	s = src;
	d = dest;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>

int main() {
    char data[] = "123456789";

    printf("%s\n", ft_memcpy(data + 2 , data, 3));
	
	 char data1[] = "123456789";
    printf("%s\n", memcpy(data1 + 2 , data1, 3));
    return 0;
}
