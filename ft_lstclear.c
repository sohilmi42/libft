/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohilmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 12:00:06 by sohilmi           #+#    #+#             */
/*   Updated: 2026/10/25 12:12:03 by sohilmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*fr;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		fr = *lst;
		del((*lst)->content);
		*lst = (*lst)->next;
		free(fr);
	}
}
