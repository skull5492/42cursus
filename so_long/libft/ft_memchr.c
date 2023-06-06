/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 22:51:30 by jtorreir          #+#    #+#             */
/*   Updated: 2022/11/30 13:04:42 by jtorreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t a)
{
	size_t						n;
	const unsigned char			*s;

	n = 0;
	s = (const unsigned char *)str;
	while (n < a)
	{
		if (s[n] == (unsigned char) c)
			return ((void *)&s[n]);
		n++;
	}
	return (NULL);
}
