/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorreir <jtorreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 17:24:14 by jtorreir          #+#    #+#             */
/*   Updated: 2023/06/06 16:02:18 by jtorreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../minilibx-linux/mlx.h"
# include "../libft/libft.h"

typedef struct	s_vars {
	void	*mlx;
	void	*win;
	char	**map;
}				t_vars;

int	keycode_finder(int keycode);
int	keycode_variation(int keycode, t_vars *win);
int	move_up(t_vars *bruh);
int	move_down(t_vars *bruh);
int	move_left(t_vars *bruh);
int	move_right(t_vars *bruh);
int	create_trgb(int t, int r, int g, int b);
int	get_t(int trgb);
int	get_r(int trgb);
int	get_g(int trgb);
int	get_b(int trgb);
int	close_window(t_vars *vars);
int	destroy_game(t_vars *brewh);
int	bruh_map(t_vars *maps);
int	map_create(t_vars *bruh);

#endif