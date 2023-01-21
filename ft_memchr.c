/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaximci <dmaximci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 22:09:11 by dmaximci          #+#    #+#             */
/*   Updated: 2023/01/19 22:50:50 by dmaximci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*haystack;
	size_t	i;

	haystack = (char *)s;
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)haystack)[i] == (unsigned char)c)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
