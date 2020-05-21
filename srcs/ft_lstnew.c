/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstreet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 18:26:26 by fstreet           #+#    #+#             */
/*   Updated: 2019/04/21 11:24:26 by fstreet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_item;

	if (!(new_item = (t_list*)malloc(sizeof(*new_item))))
		return (NULL);
	if (!content)
	{
		new_item->content = NULL;
		new_item->content_size = 0;
	}
	else
	{
		if (!(new_item->content = malloc(content_size)))
			return (NULL);
		ft_memcpy(new_item->content, content, content_size);
		new_item->content_size = content_size;
	}
	new_item->next = NULL;
	return (new_item);
}
