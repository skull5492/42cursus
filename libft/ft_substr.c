/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 04:15:08 by jtorreir          #+#    #+#             */
/*   Updated: 2022/11/30 13:33:15 by jtorreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*subst;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	if (i < start)
		len = 0;
	if (len > i - start)
		len = i - start;
	subst = (char *)malloc (sizeof(char) * (len + 1));
	if (!subst)
		return (subst);
	i = 0;
	while (i < len)
	{
		subst[i] = s[start + i];
		i++;
	}
	subst[i] = '\0';
	return (subst);
}
