/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-saou <hes-saou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 21:04:03 by hes-saou          #+#    #+#             */
/*   Updated: 2024/10/31 22:50:29 by hes-saou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// #include <stdio.h>
// int main()
// {
//     int fd1 = open("apah.txt", O_ASYNC); 
//     close(fd1); 	
//     printf("fd1 = % d\n", fd1); 
// }