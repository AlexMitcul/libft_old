/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 17:13:24 by fstreet           #+#    #+#             */
/*   Updated: 2020/01/05 00:58:14 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*big;
	size_t		i;

	big = (const char*)s;
	i = 0;
	while (i < n)
	{
		if (big[i] == c)
			return ((void*)&big[i]);
		i++;
	}
	return (NULL);
}
