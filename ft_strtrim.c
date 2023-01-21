/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaximci <dmaximci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 22:28:35 by dmaximci          #+#    #+#             */
/*   Updated: 2023/01/20 00:49:24 by dmaximci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_check_char(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		j;
	int		k;

	i = 0;
	while (((char *)s1)[i] && ft_check_char(((char *)s1)[i], ((char *)set)))
		i++;
	j = ft_strlen((char *)s1) - 1;
	while (j > i && ft_check_char(((char *)s1)[j], ((char *)set)))
		j--;
	res = (char *)malloc(sizeof(char) * (j - i + 2));
	if (!res)
		return (NULL);
	k = 0;
	while (i <= j)
	{
		res[k] = ((char *)s1)[i];
		i++;
		k++;
	}
	res[k] = '\0';
	return (res);
}
