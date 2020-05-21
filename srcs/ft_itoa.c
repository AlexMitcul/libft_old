/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstreet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 20:19:56 by fstreet           #+#    #+#             */
/*   Updated: 2019/04/21 11:25:30 by fstreet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_len_nb(int n, size_t *len, int *nd)
{
	*len = 1;
	if (n > 0)
		n = -n;
	else if (n < 0)
		*len += 1;
	*nd = 1;
	while (n < -9)
	{
		n /= 10;
		*nd *= 10;
		*len += 1;
	}
}

char		*ft_itoa(int n)
{
	size_t	len;
	int		nd;
	char	*tab;
	size_t	i;

	len = 0;
	ft_len_nb(n, &len, &nd);
	if (!(tab = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	if (n > 0)
		n = -n;
	else if (n != 0)
	{
		tab[i++] = '-';
	}
	while (nd >= 1)
	{
		tab[i++] = -(n / nd % 10) + '0';
		nd /= 10;
	}
	tab[i] = '\0';
	return (tab);
}
