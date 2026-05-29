/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoura-d <amoura-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 07:46:53 by amoura-d          #+#    #+#             */
/*   Updated: 2026/05/28 08:05:53 by amoura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*one;
	unsigned char	two;
	size_t			i;

	one = (unsigned char *)s;
	two = (unsigned char )c;
	i = 0;
	while (i < n)
	{
		if (one[i] == two)
			return (&one[i]);
		i++;
	}
	return (NULL);
}
