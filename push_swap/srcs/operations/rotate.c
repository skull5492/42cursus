/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorreir <jtorreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:31:59 by jtorreir          #+#    #+#             */
/*   Updated: 2023/10/26 17:31:59 by jtorreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	rotate_stack_a(long *stack_a, int *numbers_in_stack_a)
{
	int		i;
	long	*temp;

	i = 0;
	temp = (long *)malloc(sizeof(long));
	*temp = stack_a[0];
	while (i < numbers_in_stack_a[1])
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	stack_a[numbers_in_stack_a[1] - 1] = *temp;
	free(temp);
	write(1, "ra\n", 3);
}

void	rotate_stack_b(long *stack_b, int *numbers_in_stack_b)
{
	int		i;
	long	*temp;

	i = 0;
	temp = (long *)malloc(sizeof(long));
	*temp = stack_b[0];
	while (i < *numbers_in_stack_b)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	stack_b[*numbers_in_stack_b - 1] = *temp;
	free(temp);
	write(1, "rb\n", 3);
}

void	rotate_stack_a_and_stack_b(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b)
{
	int		i;
	long	*temp;

	i = 0;
	temp = (long *)malloc(sizeof(long));
	*temp = stack_a[0];
	while (i < numbers_in_stack_a[1])
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	stack_a[numbers_in_stack_a[1] - 1] = *temp;
	i = 0;
	*temp = stack_b[0];
	while (i < *numbers_in_stack_b)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	stack_b[*numbers_in_stack_b - 1] = *temp;
	free(temp);
	write(1, "rr\n", 3);
}