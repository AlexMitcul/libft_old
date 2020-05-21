/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alex <Alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 19:20:25 by fstreet           #+#    #+#             */
/*   Updated: 2020/05/05 17:58:52 by Alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
**static	int	ft_ws(char c)
**{
**	if (c == ' ' || c == '\n' || c == '\t')
**		return (1);
**	else
**		return (0);
**}
**
**char		*ft_strtrim(char const *s)
**{
**	int		i;
**	int		j;
**	int		k;
**	char	*tmp;
**
**	if (s)
**	{
**		i = 0;
**		j = (int)ft_strlen((char*)s);
**		while (ft_ws(s[i]))
**			i++;
**		if (!(tmp = (char*)malloc(sizeof(char) * (j - i + 1))))
**			return (NULL);
**		while (ft_ws(s[j]))
**			j--;
**		k = 0;
**		while (i < j)
**		{
**			tmp[k] = s[i];
**			k++;
**			i++;
**		}
**		tmp[k] = '\0';
**		return (tmp);
**	}
**	return (tmp);
**}
*/

char	*ft_strtrim(char const *s)
{
	char	*str;
	char	*str_new;
	size_t	len;
	size_t	counter;

	str = (char*)s;
	if (!str)
		return (NULL);
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	len = ft_strlen(str) - 1;
	if (ft_strlen(str) == 0)
		return (str_new = ft_strnew(0));
	while (str[len] == ' ' || str[len] == '\t' || str[len] == '\n')
		len--;
	if (!(str_new = ft_strnew(len)))
		return (NULL);
	counter = 0;
	while (counter <= len)
	{
		str_new[counter] = str[counter];
		counter++;
	}
	str_new[counter] = 0;
	return (str_new);
}
