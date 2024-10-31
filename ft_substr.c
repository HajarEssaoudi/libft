/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-saou <hes-saou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:28:15 by hes-saou          #+#    #+#             */
/*   Updated: 2024/10/31 23:09:55 by hes-saou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	unsigned int	i;
	size_t			j;

	i = 0;
	j = 0;
	p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	while (s[i])
	{
		if (i == start)
		{
			while (j < len)
			{
				p[j] = s[i];
				i++;
				j++;
			}
			return (p);
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d\n", ft_substr("hajar ess", 50, 3));
// }