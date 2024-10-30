/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-saou <hes-saou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:06:31 by hes-saou          #+#    #+#             */
/*   Updated: 2024/10/23 19:02:52 by hes-saou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) || (c >= '0' && c <= '9'))
		return (8);
	return (0);
}

// #include<stdio.h>
// #include <ctype.h>
// int main()
// {
// 	printf("%d\n", ft_isalnum(65));
// 	printf("%d\n",isalnum(65));
// }