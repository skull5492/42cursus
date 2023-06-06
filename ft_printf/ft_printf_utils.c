/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:57:28 by jtorreir          #+#    #+#             */
/*   Updated: 2023/01/19 16:57:32 by jtorreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write (1, &c, 1));
}

int	ft_putnbr(long int n)
{
	size_t		count;

	count = 0;
	if (n < 0)
	{
		count += ft_putchar('-');
		n = n * (-1);
	}
	if (n >= 10)
	{
		count += ft_putnbr(n / 10);
		count += ft_putchar(n % 10 + '0');
	}
	else
		count += ft_putchar((n + '0'));
	return (count);
}

int	ft_putstr(char *s)
{
	int	counter;

	if (!s)
		return (write (1, "(null)", 6));
	counter = 0;
	while (s[counter] != '\0')
	{
		write(1, &s[counter], 1);
		counter++;
	}
	return (counter);
}

int	puthex(unsigned long int n, int upper)
{
	char	*hexa_base;
	char	*hexa_base_upper;
	int		count;

	hexa_base = "0123456789abcdef";
	hexa_base_upper = "0123456789ABCDEF";
	count = 0;
	if (n >= 16)
		count += puthex(n / 16, upper);
	if (upper != 1)
		count += write(1, &hexa_base[n % 16], 1);
	else
		count += write(1, &hexa_base_upper[n % 16], 1);
	return (count);
}

int	putpointerhex(unsigned long int pointer, int flag)
{
	unsigned int	len;
	char			*hexa_base;

	len = 0;
	hexa_base = "0123456789abcdef";
	if (!pointer)
		return (write(1, "(nil)", 5));
	if (flag)
		len += write(1, "0x", 2);
	if (pointer >= 16)
		len += putpointerhex(pointer / 16, 0);
	len += write(1, &hexa_base[pointer % 16], 1);
	return (len);
}
