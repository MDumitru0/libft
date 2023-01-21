/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaximci <dmaximci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 22:28:23 by dmaximci          #+#    #+#             */
/*   Updated: 2023/01/20 00:24:49 by dmaximci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	int				size_s;
	unsigned int	i;

	i = 0;
	size_s = ft_strlen((char *)s);
	res = (char *)malloc(sizeof(char) * size_s + 1);
	if (!res)
		return (NULL);
	while (s[i])
	{
		res[i] = (f)(i, ((char *)s)[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
