/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 04:34:31 by jtorreir          #+#    #+#             */
/*   Updated: 2022/11/30 13:41:24 by jtorreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*trimmeds1;
	size_t			a;
	size_t			b;

	a = ft_strlen(s1) - 1;
	b = 0;
	trimmeds1 = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[b] && (ft_strchr(set, s1[b])) && a >= b)
			b++;
	if (b > a)
		return (ft_strdup(s1 + a + 1));
	while (s1[a] && (ft_strchr(set, s1[a])) && a > 0)
			a--;
	trimmeds1 = (char *)malloc(sizeof(char) * (a - b + 2));
	if (!trimmeds1)
		return (NULL);
	else
		ft_strlcpy(trimmeds1, &s1[b], a - b + 2);
	return (trimmeds1);
}
