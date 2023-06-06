/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:08:31 by jtorreir          #+#    #+#             */
/*   Updated: 2023/01/06 16:08:36 by jtorreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	bruh[BUFFER_SIZE + 1];
	int			i;
	char		*line;

	i = 0;
	if (BUFFER_SIZE < 1 || read(fd, 0, 0) < 0)
	{
		while (bruh[i])
			bruh[i++] = 0;
		return (NULL);
	}
	line = NULL;
	while (bruh[0] || read(fd, bruh, BUFFER_SIZE) > 0)
	{
		line = ft_strjoin(line, bruh);
		if (ft_managed_files(bruh))
			break ;
	}
	return (line);
}
