/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:00:43 by jtorreir          #+#    #+#             */
/*   Updated: 2022/11/30 13:40:13 by jtorreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*src;

	i = 0;
	src = lst;
	if (!src)
		return (0);
	while (src->next != NULL)
	{
		i++;
		src = src->next;
	}
	if (src->next == NULL)
		i++;
	return (i);
}
