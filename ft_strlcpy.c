/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaximci <dmaximci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 22:28:15 by dmaximci          #+#    #+#             */
/*   Updated: 2023/01/19 23:58:23 by dmaximci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	size_src;

	i = 0;
	size_src = ft_strlen(src);
	while (i < size_src)
	{
		if (i == size - 1)
			dst[i] = '\0';
		else if (i < size_src)
			dst[i] = src[i];
		else
			dst[i] = '\0';
		i++;
	}
	return (size_src);
}
