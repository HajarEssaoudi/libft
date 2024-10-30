/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-saou <hes-saou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:04:25 by hes-saou          #+#    #+#             */
/*   Updated: 2024/10/24 15:39:37 by hes-saou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

// #include <string.h>
// #include <stdio.h>
// int main() {
// 	char buffer[5] = "hajar";
//     char buffer2[5] = "hajar";
// 	int i = 0;	
// 	bzero(buffer, 2);	
// 	printf("Buffer from bzero: ");
// 	while (i < 5) {
// 		printf("%c", buffer[i]);
// 		i++;
// 	}
// 	printf("\n");
//
//     i = 0;
//     printf("Buffer from ft_bzero: ");
//     ft_bzero(buffer2, 2);
// 	while (i < 5) {
// 		printf("%c", buffer2[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return 0;
// }
