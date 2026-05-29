/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoura-d <amoura-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 16:38:35 by amoura-d          #+#    #+#             */
/*   Updated: 2026/05/29 17:07:48 by amoura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(long nbr)
{
	size_t	len;

	len = 0;
	if (nbr <= 0)
		len++;
	if (nbr < 0)
		nbr = -nbr;
	while (nbr > 0)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nbr;
	size_t	len;
	char	*res;

	nbr = n;
	len = get_len(nbr);
	res = ft_calloc((len + 1), sizeof(char));
	if (res == NULL)
		return (NULL);
	if (nbr == 0)
		res[0] = '0';
	if (nbr < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		len--;
		res[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (res);
}
