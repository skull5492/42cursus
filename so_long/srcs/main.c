/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorreir <jtorreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 17:06:26 by jtorreir          #+#    #+#             */
/*   Updated: 2023/06/02 17:03:18 by jtorreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(void)
{
	int	test;

	test = 110;
	test = ft_toupper(test);
	ft_printf("%i\n", test);
	return (0);
}