/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 01:21:17 by jtorreir          #+#    #+#             */
/*   Updated: 2022/11/30 13:30:17 by jtorreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	a;
	size_t	b;
	size_t	fim;
	size_t	len;
	char	*s;

	s = (char *)src;
	a = ft_strlen(dst);
	b = 0;
	len = ft_strlen(s);
	fim = 0;
	if (n > a)
		fim = a + len;
	else
		fim = len + n;
	while (s[b] != '\0' && (a + 1) < n)
	{
		dst[a++] = s[b++];
	}
	dst[a] = '\0';
	return (fim);
}
