/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohilmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 17:31:42 by sohilmi           #+#    #+#             */
/*   Updated: 2026/10/16 18:24:58 by sohilmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && little[i])
	{
		if (little[i] != big[i])
			return (0);
		i++;
	}
	if (little[i] == '\0')
		return (1);
	return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	if (*little == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		if (big[i] == *little)
			n = ft_check(big + i, little, len - i);
		if (n)
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
