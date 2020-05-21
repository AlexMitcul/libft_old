/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 16:41:45 by fstreet           #+#    #+#             */
/*   Updated: 2020/03/01 14:54:04 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/get_next_line.h"

int	new_line(char **arr_str, char **line, int fd, int index)
{
	char	*tmp;
	int		len;

	len = 0;
	while (arr_str[fd][len] != '\n' && arr_str[fd][len] != '\0')
		len++;
	if (arr_str[fd][len] == '\n')
	{
		*line = ft_strsub(arr_str[fd], 0, len);
		tmp = ft_strdup(arr_str[fd] + len + 1);
		free(arr_str[fd]);
		arr_str[fd] = tmp;
		if (arr_str[fd][len] == '\0')
			ft_strdel(&arr_str[fd]);
	}
	else if (arr_str[fd][len] == '\0')
	{
		if (index == BUFF_SIZE)
			return (get_next_line(fd, line));
		*line = ft_strdup(arr_str[fd]);
		ft_strdel(&arr_str[fd]);
	}
	return (1);
}

int	get_next_line(const int fd, char **line)
{
	static char	*arr_str[255];
	char		bf[BUFF_SIZE + 1];
	char		*tmp;
	int			index;

	if (fd < 0 || line == NULL || BUFF_SIZE < 1)
		return (-1);
	while ((index = read(fd, bf, BUFF_SIZE)) > 0)
	{
		bf[index] = '\0';
		if (arr_str[fd] == NULL)
			arr_str[fd] = ft_strnew(1);
		tmp = ft_strjoin(arr_str[fd], bf);
		free(arr_str[fd]);
		arr_str[fd] = tmp;
		if (ft_strchr(bf, '\n'))
			break ;
	}
	if (index < 0)
		return (-1);
	else if (index == 0 && (arr_str[fd] == NULL || arr_str[fd][0] == '\0'))
		return (0);
	return (new_line(arr_str, line, fd, index));
}
