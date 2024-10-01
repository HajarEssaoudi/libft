/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajar <hajar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 03:18:09 by hajar             #+#    #+#             */
/*   Updated: 2024/10/01 14:48:18 by hajar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

/*
#include<stdio.h>
#include <ctype.h>
int main ()
{
	printf("%c\n",ft_tolower(128));
    printf("%c\n",tolower(128));
	return 0;
}
*/
