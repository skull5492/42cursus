/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 04:25:54 by jtorreir          #+#    #+#             */
/*   Updated: 2022/11/30 13:09:30 by jtorreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;

	result = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (result != NULL)
	{
		ft_memcpy(result, s1, ft_strlen(s1));
		ft_memcpy(result + ft_strlen(s1), s2, (ft_strlen(s2) + 1));
	}
	return (result);
}
