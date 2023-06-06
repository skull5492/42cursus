/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtorreir <jtorreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 15:46:24 by jtorreir          #+#    #+#             */
/*   Updated: 2023/06/06 16:02:29 by jtorreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../so_long.h"

int	destroy_game(t_vars *brewh)
{
	int	i;
	int	j;

	i = 0;
	while (brewh->map[i])
	{
		free(brewh->map[i]);
		j = 0;
		while (brewh->map[i][j])
		{
			free(brewh->map[i][j]);
			j++;
		}
		i++;
	}
	return (NULL);
}

int	map_create(t_vars *bruh)
{
	
}

int	bruh_map(t_vars *maps)
{

}