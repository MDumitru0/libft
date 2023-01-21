/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaximci <dmaximci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 22:27:31 by dmaximci          #+#    #+#             */
/*   Updated: 2023/01/19 23:07:40 by dmaximci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	size;

	size = 0;
	if (src < dest)
	{
		size = n;
		while (size > 0)
		{
			size--;
			((unsigned char *)dest)[size] = ((unsigned char *)src)[size];
		}
	}
	else
	{
		size = 0;
		while (size < n)
		{
			((unsigned char *)dest)[size] = ((unsigned char *)src)[size];
			size++;
		}
	}
	return (dest);
}
