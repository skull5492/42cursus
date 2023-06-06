/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorreir <jtorreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 18:09:58 by jtorreir          #+#    #+#             */
/*   Updated: 2023/06/01 20:40:36 by jtorreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	bruh[FOPEN_MAX][BUFFER_SIZE + 1];
	int			i;
	char		*line;

	if (BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		i = 0;
		if (!fd || fd < 0)
			return (NULL);
		while (bruh[fd][i])
			bruh[fd][i++] = '\0';
		return (NULL);
	}
	line = NULL;
	while (bruh[fd][0] || read(fd, bruh[fd], BUFFER_SIZE) > 0)
	{
		line = ft_strjoin(line, bruh[fd]);
		if (ft_managed_files(bruh[fd]))
			break ;
	}
	return (line);
}
