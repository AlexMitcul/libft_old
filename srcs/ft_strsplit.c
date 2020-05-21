/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alex <Alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 17:08:40 by fstreet           #+#    #+#             */
/*   Updated: 2020/05/05 17:51:48 by Alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	*charset;
	char	**res;

	if (!s || !c)
		return (NULL);
	if (!(charset = ft_strnew(2)))
		return (NULL);
	charset[0] = c;
	res = ft_strsplitchrset((char*)s, charset);
	free(charset);
	return (res);
}
