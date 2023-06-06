/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:33:30 by jtorreir          #+#    #+#             */
/*   Updated: 2022/11/30 12:57:42 by jtorreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*int main()
{
	ft_putendl_fd("abcdef", 50);
	ft_putendl_fd("\n1234", 50);
	ft_putendl_fd("\t567", 50);
	ft_putendl_fd("", 50);
	ft_putendl_fd("\nend!", 50);
	return 0;
}*/