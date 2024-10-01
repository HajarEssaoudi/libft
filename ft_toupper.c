/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajar <hajar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 03:09:44 by hajar             #+#    #+#             */
/*   Updated: 2024/10/01 14:48:22 by hajar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

/*
#include<stdio.h>
#include <ctype.h>
int main ()
{
	printf("%c\n",ft_toupper(49));
    printf("%c\n",toupper(49));
	return 0;
}
*/