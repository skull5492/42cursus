/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:08:44 by jtorreir          #+#    #+#             */
/*   Updated: 2023/01/06 16:08:47 by jtorreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	char	*result;

	result = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (s1 && s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	free(s1);
	while (*s2)
	{
		result[i++] = *s2;
		if (*s2++ == '\n')
			break ;
	}
	result[i] = '\0';
	return (result);
}

int	ft_managed_files(char *s1)
{
	int	i;
	int	new_line;
	int	j;

	i = 0;
	new_line = 0;
	j = 0;
	if (!s1)
		return (0);
	while (s1[i])
	{
		if (new_line)
			s1[j++] = s1[i];
		if (s1[i] == '\n')
			new_line = 1;
		s1[i++] = '\0';
	}
	return (new_line);
}
