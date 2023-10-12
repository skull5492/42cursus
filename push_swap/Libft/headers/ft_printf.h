/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 21:06:27 by jtorreir          #+#    #+#             */
/*   Updated: 2023/01/17 21:06:34 by jtorreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_putnbr(long int n);
int		ft_putstr(char *s);
int		puthex(unsigned long int n, int upper);
int		putpointerhex(unsigned long int pointer, int flag);

#endif