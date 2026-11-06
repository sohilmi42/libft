/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohilmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 15:05:01 by sohilmi           #+#    #+#             */
/*   Updated: 2026/10/18 18:29:20 by sohilmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(const char *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && *s)
	{
		i++;
		s++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	if (len == 0 || start >= ft_strlen(s))
	{
		str = (char *)ft_calloc(1, 1);
		return (str);
	}
	str = (char *)ft_calloc((ft_strnlen(s + start, len) + 1), 1);
	if (!str)
		return (str);
	str = (char *)ft_memcpy(str, s + start, (ft_strnlen(s + start, len)));
	return (str);
}
