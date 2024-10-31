/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-saou <hes-saou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 22:29:31 by hes-saou          #+#    #+#             */
/*   Updated: 2024/10/31 22:47:27 by hes-saou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{	
	char	digit;
	long	num;

	num = n;
	if (num < 0)
	{
		write(fd, "-", 1);
		num = -num;
	}
	if (num >= 10)
		ft_putnbr_fd(num / 10, fd);
	digit = (num % 10) + '0';
	write(fd, &digit, 1);
}
// #include <fcntl.h>  // for open
// #include <unistd.h> // for close

// void	ft_putnbr_fd(int n, int fd);

// int	main(void)
// {
// 	int	fd;

// 	// Open a file for testing, write-only and create if it doesn't exist
// 	fd = open("apah.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	if (fd == -1)
// 		return (1);

// 	// Test cases
// 	ft_putnbr_fd(12345, fd);
// 	write(fd, "\n", 1);
// 	ft_putnbr_fd(-6789, fd);
// 	write(fd, "\n", 1);
// 	ft_putnbr_fd(0, fd);
// 	write(fd, "\n", 1);
// 	ft_putnbr_fd(-2147483648, fd); // Test for INT_MIN
// 	write(fd, "\n", 1);
// 	ft_putnbr_fd(2147483647, fd);  // Test for INT_MAX
// 	write(fd, "\n", 1);

// 	// Close the file
// 	close(fd);

// 	return (0);
// }
