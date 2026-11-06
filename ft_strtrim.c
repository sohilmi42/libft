/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohilmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 20:37:58 by sohilmi           #+#    #+#             */
/*   Updated: 2026/10/26 16:32:45 by sohilmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_compare(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_finich(char const *s1, int i, int j, int len)
{
	char	*str;
	int		k;

	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	k = 0;
	while (i <= j)
		str[k++] = s1[i++];
	str[k] = '\0';
	return (str);
}

static char	*ft_check(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] && ft_compare(s1[i], set))
		i++;
	j = ft_strlen(s1) - 1;
	if (s1[i] == '\0')
		return (ft_finich(s1, i, (i - 1), 0));
	while (j > i && ft_compare(s1[j], set))
		j--;
	return (ft_finich(s1, i, j, (j - i) + 1));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	if (!s1 || !set)
		return (NULL);
	return (ft_check(s1, set));
}
