/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 07:48:23 by jtorreir          #+#    #+#             */
/*   Updated: 2022/11/30 14:13:35 by jtorreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digitcount(int a)
{
	long int	i;

	i = 0;
	if (a <= 0)
		i = 1;
	while (a != 0)
	{
		i++;
		a = a / 10;
	}
	return (i);
}

static int	ft_sign(int n)
{
	int	sign;

	sign = 1;
	if (n < 0)
		sign = -1;
	return (sign);
}

char	*ft_zero(int n, char *str)
{
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			nb;
	int			i;

	nb = ft_sign(n);
	i = ft_digitcount(n);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (str);
	ft_zero(n, str);
	str[i] = '\0';
	while (n != 0)
	{
		str[--i] = (char)((n % 10) * ((2 * (n > 0)) - 1) + '0');
		n = n / 10;
	}
	i--;
	if (nb < 0)
		str[i] = '-';
	return (str);
}
