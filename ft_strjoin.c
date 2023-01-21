/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaximci <dmaximci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 22:28:09 by dmaximci          #+#    #+#             */
/*   Updated: 2023/01/19 23:51:06 by dmaximci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	i;
	size_t	size_s1;
	size_t	size_s2;

	i = 0;
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	res = (char *)malloc(size_s1 + size_s2);
	if (!res)
		return (NULL);
	while (i < size_s1)
	{
		res[i] = ((char *)s1)[i];
		i++;
	}
	i = 0;
	while (i < size_s2)
	{
		res[i + size_s1] = ((char *)s2)[i];
		i++;
	}
	return (res);
}
