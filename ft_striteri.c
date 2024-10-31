/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-saou <hes-saou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:44:49 by hes-saou          #+#    #+#             */
/*   Updated: 2024/10/31 22:51:03 by hes-saou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (*s)
	{
		f (i, s);
		i++;
		s++;
	}
}

void	f(unsigned int index, char *c)
{
	*c = 'a';
}
// #include <stdio.h>
// int main()
// {
// 	int i = 0;
// 	char s[6] = "hajar";
// 	ft_striteri(s, f);
// 	printf("%s\n", s);
// }