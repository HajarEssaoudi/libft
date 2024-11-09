/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-saou <hes-saou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:33:44 by hes-saou          #+#    #+#             */
/*   Updated: 2024/11/09 02:24:33 by hes-saou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if ((d == s) || (n == 0))
		return (dest);
	if (d < s)
	{
		ft_memcpy(dest, src, n);
	}
	else
	{
		i = n;
		while (i--)
			d[i] = s[i];
	}
	return (dest);
}
