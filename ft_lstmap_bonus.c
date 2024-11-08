/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-saou <hes-saou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:39:23 by hes-saou          #+#    #+#             */
/*   Updated: 2024/11/09 00:37:01 by hes-saou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	clear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	while (*lst)
	{
		ptr = *lst;
		*lst = ptr->next;
		del(ptr->content);
		free(ptr);
	}
	*lst = NULL;
}

static t_list	*new_node(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

static void	add_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!(*lst))
		*lst = new;
	else
	{
		last = *lst;
		while (last->next)
			last = last->next;
		last->next = new;
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*new;

	ptr = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		new = new_node(f(lst->content));
		if (!new)
		{
			clear(&ptr, del);
			return (NULL);
		}
		add_back(&ptr, new);
		lst = lst->next;
	}
	return (ptr);
}

void	*f(void *ptr)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)ptr;
	while (str[i])
	{
		str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

// void del(void *ptr)
// {
//     if (ptr)
//         free(ptr);
// }
// int	main(void)
// {
// 	t_list	*str;
// 	str = ft_lstnew(ft_strdup("a"));
// 	t_list *tt =  ft_lstmap(str, f, del);
// 	printf ("%s\n", tt->content);
// }