/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohilmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 17:03:10 by sohilmi           #+#    #+#             */
/*   Updated: 2026/11/03 17:03:17 by sohilmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len_1;
	size_t	len_2;

	if (!s1 || !s2)
		return (NULL);
	len_1 = ft_strlen(s1);
	len_2 = ft_strlen(s2);
	str = (char *)ft_calloc(len_1 + len_2 + 1, 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, len_1);
	ft_memcpy(str + len_1, s2, len_2);
	return (str);
}
