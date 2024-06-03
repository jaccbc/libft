/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 01:10:15 by joandre-          #+#    #+#             */
/*   Updated: 2024/05/29 23:20:37 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && *s1 == *s2 && n)
	{
		++s1;
		++s2;
		--n;
	}
	if (!n)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
