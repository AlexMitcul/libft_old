/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstreet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 19:55:18 by fstreet           #+#    #+#             */
/*   Updated: 2019/05/02 17:11:52 by fstreet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			sign;
	long int	numb;

	sign = 1;
	numb = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while ((*str >= '0' && *str <= '9') && *str)
	{
		if ((numb * 10) / 10 != numb)
		{
			numb = (sign == 1 ? -1 : 0);
			break ;
		}
		numb = numb * 10 + (*str - '0');
		str++;
	}
	return (numb * sign);
}
