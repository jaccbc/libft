/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 01:02:45 by joandre-          #+#    #+#             */
/*   Updated: 2024/05/29 23:09:17 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*chr;

	chr = (unsigned char *)s;
	while (n && *chr != (unsigned char)c)
	{
		++chr;
		--n;
	}
	if (!n)
		return (NULL);
	return ((void *)chr);
}
