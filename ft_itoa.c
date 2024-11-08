/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-saou <hes-saou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 20:43:35 by hes-saou          #+#    #+#             */
/*   Updated: 2024/11/07 22:09:45 by hes-saou         ###   ########.fr       */
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

char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	int		l;
	long	num;

	num = (long)n;
	l = len(num);
	res = malloc(l + 1);
	if (!res)
		return (NULL);
	res[l] = '\0';
	if (num < 0)
	{
		num = -num;
		res[0] = '-';
	}
	if (num == 0)
		res[0] = '0';
	i = l;
	while (num > 0)
	{
		res[--i] = (num % 10) + '0';
		num = num / 10;
	}
	return (res);
}
