/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:42:54 by jtorreir          #+#    #+#             */
/*   Updated: 2022/11/30 13:28:16 by jtorreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		s2_len;

	i = 0;
	s2_len = ft_strlen(s2);
	if (!s2)
		return ((char *)s1);
	while (ft_strncmp(&s1[i], s2, s2_len) != 0)
	{
		if (!s1[i] || i >= (n - s2_len))
			return (NULL);
		i++;
	}
	if (s2_len > n)
		return (NULL);
	return ((char *)(&s1[i]));
}
