/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstreet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 15:59:05 by fstreet           #+#    #+#             */
/*   Updated: 2019/04/11 21:43:18 by fstreet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*new_str;

	if (s1 && s2)
	{
		len = ft_strlen(s1) + ft_strlen(s2);
		new_str = (char*)malloc(sizeof(char) * (len + 1));
		if (new_str)
		{
			ft_strcpy(new_str, s1);
			ft_strcat(new_str, s2);
		}
		return (new_str);
	}
	return (NULL);
}
