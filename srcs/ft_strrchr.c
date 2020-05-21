/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstreet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 18:39:28 by fstreet           #+#    #+#             */
/*   Updated: 2019/04/14 13:31:11 by fstreet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*position;

	position = (0);
	while (*s)
	{
		if (*s == c)
			position = (char*)s;
		s++;
	}
	if (position)
		return (position);
	if (c == '\0')
		return ((char*)s);
	return (0);
}
