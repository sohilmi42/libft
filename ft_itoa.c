/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohilmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 20:14:54 by sohilmi           #+#    #+#             */
/*   Updated: 2026/10/19 21:12:13 by sohilmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digit(long int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = (n * -1);
		count++;
	}
	while (n)
	{
		n = (n / 10);
		count++;
	}
	return (count);
}

static void	ft_rev_str(char *s, char *e)
{
	char	c;

	while (s < e)
	{
		c = *s;
		*s = *e;
		*e = c;
		s++;
		e--;
	}
}

static void	ft_store(char *str, long int n)
{
	char	*s;

	s = str;
	if (n < 0)
	{
		n = (n * -1);
		*str = '-';
		str = str + 1;
		s = str;
	}
	while (n)
	{
		*str = ((n % 10) + '0');
		n = (n / 10);
		str++;
	}
	*str = '\0';
	ft_rev_str(s, str - 1);
}

char	*ft_itoa(int n)
{
	char	*str;

	str = NULL;
	if (n == 0)
	{
		str = malloc(2 * sizeof(char));
		if (!str)
			return (NULL);
		*str = '0';
		*(str + 1) = '\0';
		return (str);
	}
	str = malloc((ft_count_digit(n) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_store(str, n);
	return (str);
}
