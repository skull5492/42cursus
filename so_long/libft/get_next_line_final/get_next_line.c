/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorreir <jtorreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:08:31 by jtorreir          #+#    #+#             */
/*   Updated: 2023/06/01 21:17:11 by jtorreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	bruh[FOPEN_MAX][BUFFER_SIZE + 1];
	int			i;
	char		*line;

	i = 0;
	if (BUFFER_SIZE < 1 || read(fd, 0, 0) < 0)
	{
		while (bruh[fd][i])
			bruh[fd][i++] = 0;
		return (NULL);
	}
	line = NULL;
	while (bruh[fd][0] || read(fd, bruh[fd], BUFFER_SIZE) > 0)
	{
		line = ft_strjoined(line, bruh[fd]);
		if (ft_managed_files(bruh[fd]))
			break ;
	}
	return (line);
}
