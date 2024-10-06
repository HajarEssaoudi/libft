/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajar <hajar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:15:24 by hajar             #+#    #+#             */
/*   Updated: 2024/10/06 19:07:55 by hajar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;
	size_t	j;

	d_len = 0;
	while(dst[d_len])
		d_len++;
	s_len = 0;
	while (src[s_len])
		s_len++;
	if (d_len >= size)
		return (size + s_len);
	i = 0;
	j = d_len;
	while(src[i] && (j < size -1))
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	if (j < size)
		dst[j] = '\0';
	return (d_len + s_len);
}

/*
#include <stdio.h>

int main()
{
	char d[15] = "Hajar ";
	const char *s = "Essaoudi";
	printf("%zu\n", ft_strlcat(d, s, 15));
	printf("%s\n", d);
}*/
