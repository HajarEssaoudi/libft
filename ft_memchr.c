/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-saou <hes-saou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:35:46 by hes-saou          #+#    #+#             */
/*   Updated: 2024/10/31 23:14:44 by hes-saou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ss;
	size_t			i;

	ss = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*ss == (unsigned char)c)
		{
			return ((void *)ss);
		}
		ss++;
		i++;
	}
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	printf("%c\n", ft_memchr("hajar", 'l', 5));
// 	printf("%c\n", memchr("hajar", 'l', 5));
// }
