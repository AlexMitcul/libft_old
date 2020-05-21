/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstreet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 19:13:11 by fstreet           #+#    #+#             */
/*   Updated: 2019/04/11 19:19:15 by fstreet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*lst1;
	t_list	*lst2;
	t_list	*result;

	if (!lst || !f)
		return (NULL);
	lst2 = f(lst);
	if ((result = ft_lstnew(lst2->content, lst2->content_size)))
	{
		lst1 = result;
		lst = lst->next;
		while (lst)
		{
			lst2 = f(lst);
			if (!(lst1->next = ft_lstnew(lst2->content,
							lst2->content_size)))
				return (NULL);
			lst1 = lst1->next;
			lst = lst->next;
		}
	}
	return (result);
}
