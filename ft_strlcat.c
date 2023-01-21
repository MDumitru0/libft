/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaximci <dmaximci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 22:28:12 by dmaximci          #+#    #+#             */
/*   Updated: 2023/01/19 23:55:08 by dmaximci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	size_src;
	size_t	size_dst;

	i = 0;
	size_src = ft_strlen(src);
	size_dst = ft_strlen(dst);
	while (i < size_src)
	{
		if (i == size - 1)
			dst[i + size_dst] = '\0';
		else if (i < size_src)
			dst[i + size_dst] = src[i];
		else
			dst[i + size_dst] = '\0';
		i++;
	}
	return (size_src + size_dst);
}
