/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstreet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:56:59 by fstreet           #+#    #+#             */
/*   Updated: 2019/04/14 13:15:54 by fstreet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	i;

	if (n < 0)
	{
		i = n * (-1);
		ft_putchar_fd('-', fd);
	}
	else
		i = n;
	if (i < 10)
		ft_putchar_fd('0' + i, fd);
	else
	{
		ft_putnbr_fd((int)(i / 10), fd);
		ft_putnbr_fd((int)(i % 10), fd);
	}
}
