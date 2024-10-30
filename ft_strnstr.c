/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-saou <hes-saou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:08:43 by hes-saou          #+#    #+#             */
/*   Updated: 2024/10/28 17:27:43 by hes-saou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
// little empty

	if (!little)
		return ((char *)big);

	while(big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (!little[j])
			{
				return((char *)(big + i));
			}
			j++;
		}
		if (!little[j])
		{
			return((char *)(big + i));
		}
		i++;
	}
return (NULL);
}

// #include <stdio.h>
// int main ()
// {
// 	char a[] = "hello im a new programer";
// 	char b[] = "new";
// 	size_t x = 14;
// 	printf("%s\n",ft_strnstr(a, b , x));
// 	return (0);
// }
