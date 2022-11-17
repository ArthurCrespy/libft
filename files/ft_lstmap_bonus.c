/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:32:36 by acrespy           #+#    #+#             */
/*   Updated: 2022/11/17 15:32:37 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

//Iterates over the 'lst' list and applies the 'f' function to the contents of each element. Creates a new list resulting from the successive applications of 'f'. The 'del' function is there to destroy the content of an element if necessary

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{

t_list *new;
	t_list *first;

	if (!lst)
		return (NULL);
	first = ft_lstnew(f(lst->content));
	if (!first)
		return (NULL);
	new = first;
	lst = lst->next;
	while (lst)
	{
		new->next = ft_lstnew(f(lst->content));
		if (!new->next)
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		new = new->next;
		lst = lst->next;
	}
	return (first);}