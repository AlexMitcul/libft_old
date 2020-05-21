/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstreet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 19:06:21 by fstreet           #+#    #+#             */
/*   Updated: 2019/04/14 13:16:49 by fstreet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;
	int	k;
	int	first;

	i = 0;
	j = 0;
	if (!*needle)
		return ((char*)haystack);
	while (haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			first = i;
			k = i;
			while (needle[j] != '\0' && (haystack[k++] == needle[j]))
				j++;
			if (needle[j] == '\0' && (haystack[k - 1] == needle[j - 1]))
				return (&((char*)haystack)[first]);
		}
		i++;
	}
	return (NULL);
}
