/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:37:24 by jtorreir          #+#    #+#             */
/*   Updated: 2022/11/30 13:28:52 by jtorreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	c;

	c = n;
	if (c < 0)
	{
		ft_putchar_fd('-', fd);
		c = c * (-1);
	}
	if (c >= 10)
	{
		ft_putnbr_fd(c / 10, fd);
		ft_putchar_fd(c % 10 + '0', fd);
	}
	else
		ft_putchar_fd((c + '0'), fd);
}

/*int main()
{
	ft_putnbr_fd(0, 50);
	ft_putnbr_fd(10000043, 50);
	ft_putnbr_fd(-10000043, 50);
	ft_putnbr_fd(2147483647, 50);
	ft_putnbr_fd(-2147483648, 50);
}*/