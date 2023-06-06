/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:30:46 by jtorreir          #+#    #+#             */
/*   Updated: 2022/11/30 13:20:08 by jtorreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (!str1 && !str2)
		return (NULL);
	if (str1 > str2)
	{
		while (n > 0)
		{
			((char *)str1)[n - 1] = ((char *)str2)[n - 1];
			n--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((char *)str1)[i] = ((char *)str2)[i];
			i++;
		}
	}
	return (str1);
}
