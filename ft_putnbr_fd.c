/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoura-d <amoura-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 15:40:41 by amoura-d          #+#    #+#             */
/*   Updated: 2026/05/29 15:48:51 by amoura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		write(fd, "-", 1);
			nbr = -nbr;
	}
	if (nbr > 9)
		ft_putnbr_fd((int)(nbr / 10), fd);
	ft_putchar_fd((nbr % 10) + '0', fd);
}
