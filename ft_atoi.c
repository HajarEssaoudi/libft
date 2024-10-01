/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajar <hajar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 03:45:22 by hajar             #+#    #+#             */
/*   Updated: 2024/10/01 14:46:58 by hajar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	ichara;

	res = 0;
	ichara = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		ichara = -ichara;
		i++;
	}
	else if (str[i] == '+')
	{
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (ichara * res);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("The integer value is: %d\n", atoi("--12345"));
	printf("The integer value is: %d\n", ft_atoi("+12345"));
	return 0;
}

*/