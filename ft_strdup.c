/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohilmi <sohilmi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 22:52:04 by sohilmi           #+#    #+#             */
/*   Updated: 2026/10/29 18:28:26 by sohilmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_strcpy(char *dst, char *src)
{
	while (*src)
	{
		*dst = *src;
		src++;
		dst++;
	}
	*dst = '\0';
}

char	*ft_strdup(const char *s)
{
	char	*new;

	new = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!new)
		return (NULL);
	ft_strcpy(new, (char *)s);
	return (new);
}
