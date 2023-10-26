/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:31:19 by jtorreir          #+#    #+#             */
/*   Updated: 2022/11/30 13:08:09 by jtorreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

/*int main()
{
	ft_putstr_fd("abcdef", 50);
	ft_putstr_fd("\n1234", 50);
	ft_putstr_fd("\t567", 50);
	ft_putstr_fd("", 50);
	ft_putstr_fd("\nend!", 50);
	return 0;
}*/