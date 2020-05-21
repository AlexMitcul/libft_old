/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstreet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 19:38:13 by fstreet           #+#    #+#             */
/*   Updated: 2019/04/21 11:36:02 by fstreet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	i;
	size_t	e;

	i = 0;
	if (size == 0)
		return (ft_strlen(dst));
	while (dst[i] && i < size)
		i++;
	e = i;
	while (src[i - e] && i < size - 1)
	{
		dst[i] = src[i - e];
		i++;
	}
	if (e < size)
		dst[i] = '\0';
	return (e + ft_strlen(src));
}
