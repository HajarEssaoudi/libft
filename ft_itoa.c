/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-saou <hes-saou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 20:43:35 by hes-saou          #+#    #+#             */
/*   Updated: 2024/10/31 22:51:46 by hes-saou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len(long n)
{
	long	l;

	l = 0;
	if (n <= 0)
		l++;
	while (n != 0)
	{
		n = n / 10;
		l++;
	}
	return (l);
}

char	*allocate(char *res, long l)
{
	res = (char *)malloc(l + 1);
	if (!res)
		return (NULL);
	return (res);
}

char	*ft_itoa(int n)
{
	char		*res;
	int			i;
	int			l;
	long		num;

	num = n;
	l = len (num);
	i = l;
	res = allocate(res, l);
	if (num < 0)
	{
		num = -num;
		res[0] = '-';
	}
	res[l] = '\0';
	while (num > 0)
	{
		res[--i] = (num % 10) + '0';
		num = num / 10;
	}
	if (n == 0)
		res[0] = '0';
	return (res);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main() 
// {
// 	// Test with typical positive and negative numbers
// 	char *str;
// 	str = ft_itoa(123);
// 	printf("Positive number (123): %s\n", str);
// 	free(str);
// 	str = ft_itoa(-123);
// 	printf("Negative number (-123): %s\n", str);
// 	free(str);
// 	// Test with zero
// 	str = ft_itoa(0);
// 	printf("Zero (0): %s\n", str);
// 	free(str);
// 	// Test with edge cases: INT_MIN and INT_MAX
// 	str = ft_itoa(-2147483648);
// 	printf("INT_MIN (-2147483648): %s\n", str);
// 	free(str);
// 	str = ft_itoa(2147483647);
// 	printf("INT_MAX (2147483647): %s\n", str);
// 	free(str);
// 	// Test with single-digit numbers
// 	str = ft_itoa(5);
// 	printf("Single digit positive (5): %s\n", str);
// 	free(str);
// 	str = ft_itoa(-5);
// 	printf("Single digit negative (-5): %s\n", str);
// 	free(str);
// 	// Test with very large negative and positive numbers
// 	str = ft_itoa(1000000000);
// 	printf("Large positive (1000000000): %s\n", str);
// 	free(str);
// 	str = ft_itoa(-1000000000);
// 	printf("Large negative (-1000000000): %s\n", str);
// 	free(str);
// 	return 0;
// }
