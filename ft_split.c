/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:02:11 by joandre-          #+#    #+#             */
/*   Updated: 2024/05/30 03:27:04 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	alloc(char **split, const char *s, char c)
{
	char		**chops;
	const char	*str;

	chops = split;
	str = s;
	while (*str)
	{
		while (*s == c)
			++s;
		str = s;
		while (*str && *str != c)
			++str;
		if (*str == c || str > s)
		{
			*chops = ft_substr(s, 0, str - s);
			s = str;
			++chops;
		}
	}
	*chops = NULL;
}

static size_t	count_split(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			++s;
		if (*s)
			++count;
		while (*s && *s != c)
			++s;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	size;

	if (!s)
		return (NULL);
	size = count_split(s, c);
	split = (char **)malloc(sizeof(char *) * (size + 1));
	if (!split)
		return (NULL);
	alloc(split, s, c);
	return (split);
}
