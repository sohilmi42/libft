/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohilmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 14:37:30 by sohilmi           #+#    #+#             */
/*   Updated: 2026/10/19 15:51:44 by sohilmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_helper(char s, char c)
{
	if (s == c || s == '\0')
		return (0);
	return (1);
}

static int	ft_count_word(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (ft_helper(*s, c) && !ft_helper(*(s + 1), c))
			count++;
		s++;
	}
	return (count);
}

static int	ft_alloction(char **arr, const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (*s)
	{
		if (ft_helper(*s, c))
			count++;
		if (ft_helper(*s, c) && !ft_helper(*(s + 1), c))
		{
			arr[i] = malloc((count + 1) * sizeof(char));
			if (!arr[i])
			{
				while (i > 0)
					free(arr[--i]);
				free(arr);
				return (1);
			}
			count = 0;
			i++;
		}
		s++;
	}
	return (0);
}

static void	ft_strmycpy(char **arr, const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*s)
	{
		if (ft_helper(*s, c))
			arr[i][j++] = *s;
		if (ft_helper(*s, c) && !ft_helper(*(s + 1), c))
		{
			arr[i][j] = '\0';
			j = 0;
			i++;
		}
		s++;
	}
	arr[i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (s == NULL)
		return (NULL);
	arr = malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	if (ft_alloction(arr, s, c))
		return (NULL);
	ft_strmycpy(arr, s, c);
	return (arr);
}
