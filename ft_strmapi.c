/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-saou <hes-saou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:34:13 by hes-saou          #+#    #+#             */
/*   Updated: 2024/10/31 17:44:20 by hes-saou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mapi;
	int		i;
	int		j;

	i = 0;
	j = 0;
	mapi = (char *)malloc(ft_strlen(s) + 1);
	if (!mapi)
		return (NULL);
	while (*s)
	{
		mapi[i] = f (i, *s);
		i++;
		s++;
	}
	mapi[i] = '\0';
	return (mapi);
}
// char	f(unsigned int index, char c)
// {
// 	if (c >= 'a' && c <= 'z')
// 	{
// 		c -= 32;
// 		return (c);
// 	}
// 	else
// 	{
// 		return (c);
// 	}
// }
// #include <stdio.h>
// int main()
// {
// 	int i = 0;
// 	char s[6] = "hajar";
// 	char *mpi = ft_strmapi(s, &f);
// 	printf("%s\n", mpi);
// }
