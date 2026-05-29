/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoura-d <amoura-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 09:33:33 by amoura-d          #+#    #+#             */
/*   Updated: 2026/05/25 15:10:08 by amoura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ds;
	unsigned char	*or;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	ds = (unsigned char *)dest;
	or = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ds[i] = or[i];
		i++;
	}
	return (dest);
}
