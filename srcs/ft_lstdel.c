/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstreet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 19:08:55 by fstreet           #+#    #+#             */
/*   Updated: 2019/04/11 21:44:47 by fstreet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*list;
	t_list	*next_list;

	list = *alst;
	while (list)
	{
		next_list = list->next;
		del(list->content, list->content_size);
		free(list);
		list = next_list;
	}
	*alst = NULL;
}
