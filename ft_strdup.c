/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaximci <dmaximci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 22:28:02 by dmaximci          #+#    #+#             */
/*   Updated: 2023/01/19 23:43:26 by dmaximci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*tab;
	size_t	i;

	i = 0;
	tab = (char *)malloc(sizeof(char) * ft_strlen(s));
	if (!tab)
		return (NULL);
	while (i < ft_strlen(s))
	{
		tab[i] = s[i];
		i++;
	}
	return (tab);
}
