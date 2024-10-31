/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-saou <hes-saou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:06:21 by hes-saou          #+#    #+#             */
/*   Updated: 2024/10/31 23:17:46 by hes-saou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;
	size_t	j;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	i = 0;
	j = dlen;
	if (size <= dlen)
		return (size + slen);
	while (src[i] && j < size - 1)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (dlen + slen);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char dest[20] = "Hello";
//     char *src = " World!";

//     // Concatenate src to dest with strlcat
//     size_t result = ft_strlcat(dest, src, 10);

//     printf("Resulting string: '%s'\n", dest);
//     printf("Total length tried to create: %zu\n", result);

//      return 0;
// }
