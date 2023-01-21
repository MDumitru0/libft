/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaximci <dmaximci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 22:09:08 by dmaximci          #+#    #+#             */
/*   Updated: 2023/01/19 22:39:18 by dmaximci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_get_size_number(int n)
{
	int	i;

	i = 0;
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (++i);
}

static	char	*ft_itoa_p(char signe, int rest, int size_n, int n)
{
	char	*res;

	res = "";
	if (signe == '-')
		res = (char *)malloc(sizeof(char) * size_n + 2);
	res = (char *)malloc(sizeof(char) * size_n + 1);
	if (!res)
		return (NULL);
	if (signe == '-')
	{
		res[0] = '-';
		size_n++;
	}
	res[size_n] = '\0';
	size_n--;
	while (n > 9)
	{
		rest = n % 10;
		n = n / 10;
		res[size_n] = rest + 48;
		--size_n;
	}
	rest = n % 10;
	res[size_n] = rest + 48;
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		size_n;
	char	signe;
	int		rest;

	rest = 0;
	signe = '+';
	if (n < 0)
	{
		n = n * (-1);
		signe = '-';
	}
	size_n = ft_get_size_number(n);
	res = ft_itoa_p(signe, rest, size_n, n);
	return (res);
}
