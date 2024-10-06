/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajar <hajar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 19:57:53 by hajar             #+#    #+#             */
/*   Updated: 2024/10/06 20:54:10 by hajar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *	ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_l;

	i = 0;
	len_l = 0;
	while(little[len_l])
		len_l++;	
	if (len_l == 0)
		return (char *)big;
	while(big[i] && i < len)
	{
		j = 0;
		while (i + j < len && big[i + j] && big[i + j] == little[j])
		{
			j++;
			if (j == len_l)
                return (char *)&big[i];
		}
		i++;
	}
	return NULL;
}

#include <stdio.h>
#include<strings.h>
int main ()
{
	const char *largestring = "Foo Bar Baz";
    const char *smallstring = "Fo";
    char *ptr;
	ptr = ft_strnstr(largestring, smallstring, 2);
	if (ptr)
        printf("%s\n", ptr); // This will print the substring starting from the match
    else
        printf("not found.\n");

}
