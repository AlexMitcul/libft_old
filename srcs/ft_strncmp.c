/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstreet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 18:53:50 by fstreet           #+#    #+#             */
/*   Updated: 2019/04/13 17:09:20 by fstreet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 1;
	while (*s1 && *s2 && (*s1 == *s2) && i < n)
	{
		s1++;
		s2++;
		i++;
	}
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}
