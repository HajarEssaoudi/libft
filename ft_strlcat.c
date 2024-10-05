/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajar <hajar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:15:24 by hajar             #+#    #+#             */
/*   Updated: 2024/10/05 23:48:36 by hajar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	char	*s;
	size_t	count;

	*s = (char) *src;
	i = 0;
	j = 0;
	count = 0;
	while(s[i])
		i++;
	count = i;
	if(size > 0)
	{
		while(dst[i])
		{
			s[i] = dst[j];
			i++;
			j++;
		}
	}
	return (size + count);
}