/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 21:03:37 by jtorreir          #+#    #+#             */
/*   Updated: 2023/01/17 21:03:40 by jtorreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(const char format, va_list arg)
{
	if (format == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(arg, char *)));
	else if (format == 'p')
		return (putpointerhex(va_arg(arg, unsigned long), 1));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(arg, int)));
	else if (format == 'u')
		return (ft_putnbr(va_arg(arg, unsigned int)));
	else if (format == 'x')
		return (puthex(va_arg(arg, unsigned int), 0));
	else if (format == 'X')
		return (puthex(va_arg(arg, unsigned int), 1));
	else if (format == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int			counter;
	int			ret;
	va_list		arg;

	if (!format)
		return (0);
	counter = -1;
	ret = 0;
	va_start(arg, format);
	while (format[++counter])
	{
		if (format[counter] == '%')
		{
			if (format[counter + 1] != '%')
				ret += ft_format(format[counter + 1], arg);
			else
				ret += write (1, &format[counter], 1);
			counter++;
		}
		else
				ret += write (1, &format[counter], 1);
	}
	va_end(arg);
	return (ret);
}

/*int main()
{
	ft_printf(" %p ", -1);
	printf(" %p ", (void *)-1);
}*/