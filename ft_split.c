/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoura-d <amoura-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 15:08:26 by amoura-d          #+#    #+#             */
/*   Updated: 2026/06/03 15:00:45 by amoura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	if (!s)
		return (0);
	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
		{
			in_word = 0;
		}
		s++;
	}
	return (count);
}

static char	**free_matrix(char **matrix, int i)
{
	while (i > 0)
	{
		i--;
		free(matrix[i]);
	}
	free(matrix);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	char	*start;
	int		j;

	if (!s)
		return (NULL);
	matrix = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!matrix)
		return (NULL);
	j = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (!*s)
			break ;
		start = (char *)s;
		while (*s != c && *s)
			s++;
		matrix[j] = ft_substr(start, 0, s - start);
		if (!matrix[j++])
			return (free_matrix(matrix, j - 1));
	}
	matrix[j] = NULL;
	return (matrix);
}
