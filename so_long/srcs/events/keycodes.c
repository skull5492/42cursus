/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keycodes.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorreir <jtorreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:56:45 by jtorreir          #+#    #+#             */
/*   Updated: 2023/06/06 15:37:37 by jtorreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../so_long.h"

int	close_window(t_vars *vars)
{
	mlx_destroy_window(vars->mlx, vars->win);
	exit(0);
	return (0);
}

int	keycode_finder(int keycode)
{
	return (keycode);
}

int	keycode_variation(int keycode, t_vars *win)
{
	if (keycode == 87)
		move_up(win);
	if (keycode == 83)
		move_down(win);
	if (keycode == 65)
		move_left(win);
	if (keycode == 68)
		move_right(win);
	if (keycode == 27)
		close_window(win);
	return (0);
}
