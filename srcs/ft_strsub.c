/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstreet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 15:54:54 by fstreet           #+#    #+#             */
/*   Updated: 2019/04/12 14:58:13 by fstreet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*dup;
	size_t	i;

	if (!s || start > ft_strlen(s))
		return (NULL);
	if (!(dup = ft_strnew(len)))
		return (NULL);
	i = 0;
	while (s[i] != '\0' && i < len)
		dup[i++] = s[start++];
	dup[i] = '\0';
	return (dup);
}
