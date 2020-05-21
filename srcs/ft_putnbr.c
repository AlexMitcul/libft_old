/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstreet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 15:53:24 by fstreet           #+#    #+#             */
/*   Updated: 2019/04/14 13:17:16 by fstreet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	unsigned int	i;

	if (nb < 0)
	{
		i = nb * (-1);
		ft_putchar('-');
	}
	else
		i = nb;
	if (i < 10)
	{
		ft_putchar('0' + i);
	}
	else
	{
		ft_putnbr((int)(i / 10));
		ft_putnbr((int)(i % 10));
	}
}
