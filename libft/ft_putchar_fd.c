/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:28:37 by jtorreir          #+#    #+#             */
/*   Updated: 2022/11/30 13:21:53 by jtorreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int main () {
   
   ft_putchar_fd('a', fd);
   ft_putchar_fd('x', fd);
   ft_putchar_fd('y', fd);
   ft_putchar_fd('z', fd);
   ft_putchar_fd('\n', fd);
   return(0);
}*/