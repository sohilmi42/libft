/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohilmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 16:32:57 by sohilmi           #+#    #+#             */
/*   Updated: 2026/10/25 16:46:13 by sohilmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_create_list(int size, void (*del)(void *))
{
	t_list	*head;
	t_list	*list;

	list = ft_lstnew(NULL);
	if (!list)
		return (NULL);
	head = list;
	while (size > 0)
	{
		list->next = ft_lstnew(NULL);
		if (!list->next)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		list = list->next;
		size--;
	}
	return (head);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*list;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	head = ft_create_list(ft_lstsize(lst) - 1, del);
	if (!head)
		return (NULL);
	list = head;
	while (lst)
	{
		content = f(lst->content);
		if (!content)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		list->content = content;
		lst = lst->next;
		list = list->next;
	}
	return (head);
}
