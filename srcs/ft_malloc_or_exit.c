/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_or_exit.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alex <Alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 12:40:38 by alex              #+#    #+#             */
/*   Updated: 2020/05/05 17:50:56 by Alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_malloc_or_exit(size_t size)
{
	void	*pointer;

	if ((pointer = malloc(size)) == NULL)
	{
		perror("malloc");
		exit(1);
	}
	return (pointer);
}
