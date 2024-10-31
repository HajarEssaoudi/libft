/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-saou <hes-saou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 22:18:19 by hes-saou          #+#    #+#             */
/*   Updated: 2024/10/31 22:48:34 by hes-saou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	while (*s)
	{
		write (fd, s, 1);
		s++;
	}
	write (fd, "\n", 1);
}
// #include <fcntl.h>
// #include <unistd.h>
// #include <stdio.h>
// int main()
// {
// 	int fd = open("apah.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	if (fd == -1)
// 	{
// 		perror("Error opening file");
// 		return 1;
// 	}
// 	ft_putendl_fd("Hello, world!hgtht", fd); 
// 	close(fd);
// 	return 0;
// }
