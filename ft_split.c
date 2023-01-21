/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaximci <dmaximci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 22:27:56 by dmaximci          #+#    #+#             */
/*   Updated: 2023/01/19 23:36:03 by dmaximci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_get_nb_words(char const *str, char split)
{
	size_t	res;
	size_t	i;

	res = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == split)
			++i;
		if (str[i])
			++res;
		while (str[i] && str[i] != split)
			++i;
	}
	return (res);
}

static	char	*ft_strdup_spec(char const *s, char c)
{
	int		i;
	char	*dst;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	dst = (char *)malloc(sizeof(char) * (i + 1));
	if (!dst)
		return (0);
	i = 0;
	while (s[i] && s[i] != c)
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	int		word_count;
	int		i;
	int		j;

	word_count = ft_get_nb_words((char *)s, c);
	tab = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!tab)
		return (NULL);
	tab[word_count] = NULL;
	i = 0;
	j = 0;
	while (j < word_count)
	{
		while (s[i] && s[i] == c)
			i++;
		tab[j++] = ft_strdup_spec(s + i, c);
		while (s[i] && s[i] != c)
			i++;
	}
	tab[j] = NULL;
	return (tab);
}
