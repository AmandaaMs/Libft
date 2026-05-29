/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoura-d <amoura-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 09:20:50 by amoura-d          #+#    #+#             */
/*   Updated: 2026/05/29 08:56:59 by amoura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;
	size_t	total;

	if (size != 0 && nmemb > (SIZE_MAX / size))
		return (NULL);
	total = nmemb * size;
	res = malloc(total);
	if (res == NULL)
		return (NULL);
	ft_bzero(res, total);
	return (res);
}
