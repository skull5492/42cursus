/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorreir <jtorreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:06:04 by jtorreir          #+#    #+#             */
/*   Updated: 2023/10/26 17:06:04 by jtorreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <string.>
# include <stdlib.h>
# include <stdio.h>
# include <errno.h>

void    stack_a_push(long *stack_a, long *stack_b, int *stack_a_numbers, int *stack_b_numbers);
void    stack_b_push(long *stack_a, long *stack_b, int *stack_a_numbers, int *stack_b_numbers);

void    reverse_rotate_stack_a(long *stack_a, int *stack_a_numbers);
void    reverse_rotate_stack_b(long *stack_b, int *stack_b_numbers);
void    reverse_both_stacks(long *stack_a, long *stack_b, int *stack_a_numbers, int *stack_b_numbers);

void	rotate_stack_a(long *stack_a, int *numbers_in_stack_a);
void	rotate_stack_b(long *stack_b, int *numbers_in_stack_b);
void	rotate_stack_a_and_stack_b(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);

void    swap_stack_a(long *stack_a, int *stack_a_numbers);
void    swap_stack_b(long, *stack_b, int *stack_b_numbers);
void    swap_both_stacks(long *stack_a, long *stack_b, int *stack_a_numbers, int *stack_b_numbers);

void    sort_3_numbers(long *stack_a, int *stack_a_numbers);
#endif