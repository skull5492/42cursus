/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wasd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorreir <jtorreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 16:11:08 by jtorreir          #+#    #+#             */
/*   Updated: 2023/06/06 00:37:51 by jtorreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	move_up(t_vars *bruh)
{
	int	a;
	int	b;

	a = 0;
	while (bruh->map[++a])
	{
		b = 0;
		while (bruh->map[a][++b])
		{
			if (bruh->map[a][b] == 'p')
			{
				if (bruh->map[--a][b] == 'e')
					close_window(bruh);
				else if (bruh->map[--a][b] != '1')
				{
					bruh->map[--a][b] == 'p';
					bruh->map[a][b] == '0';
					a--;
				}
			}
		}
	}
	return (0);
}

int	move_down(t_vars *bruh)
{
	int	a;
	int	b;

	a = 0;
	while (bruh->map[++a])
	{
		b = 0;
		while (bruh->map[a][++b])
		{
			if (bruh->map[a][b] == 'p')
			{
				if (bruh->map[++a][b] == 'e')
					close_window(bruh);
				else if (bruh->map[++a][b] != '1')
				{
					bruh->map[++a][b] == 'p';
					bruh->map[a][b] == '0';
					a++;
				}
			}
		}
	}
	return (0);
}

int	move_left(t_vars *bruh)
{
	int	a;
	int	b;

	a = 0;
	while (bruh->map[++a])
	{
		b = 0;
		while (bruh->map[a][++b])
		{
			if (bruh->map[a][b] == 'p')
			{
				if (bruh->map[a][--b] == 'e')
					close_window(bruh);
				else if (bruh->map[a][--b] != '1')
				{
					bruh->map[a]--[b] == 'p';
					bruh->map[a][b] == '0';
					b--;
				}
			}
		}
	}
	return (0);
}

int	move_right(t_vars *bruh)
{
	int	a;
	int	b;

	a = 0;
	while (bruh->map[++a])
	{
		b = 0;
		while (bruh->map[a][++b])
		{
			if (bruh->map[a][b] == 'p')
			{
				if (bruh->map[a][++b] == 'e')
					close_window(bruh);
				else if (bruh->map[a][++b] != '1')
				{
					bruh->map[a][++b] == 'p';
					bruh->map[a][b] == '0';
					b++;
				}
			}
		}
	}
	return (0);
}
