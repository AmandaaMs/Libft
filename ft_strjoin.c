/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoura-d <amoura-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 13:45:00 by amoura-d          #+#    #+#             */
/*   Updated: 2026/05/29 14:16:28 by amoura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	one;
	size_t	two;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	one = ft_strlen(s1);
	two = ft_strlen(s2);
	res = ft_calloc((one + two + 1), sizeof(char));
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, s1, (one + two + 1));
	ft_strlcat(res, s2, (one + two + 1));
	return (res);
}
