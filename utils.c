/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moturki <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:31:28 by moturki           #+#    #+#             */
/*   Updated: 2023/11/22 13:06:32 by moturki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_free_info(t_game *info)
{
	int	i;

	i = -1;
	while (++i < info->y)
	{
		free(info->map_copy[i]);
		free(info->map[i]);
	}
	if (info->map)
	{
		free(info->map);
		free(info->map_copy);
	}
	return (0);
}

int	ft_error(int error)
{
	ft_printf("Error !\n");
	if (error == 1)
		ft_printf("Could not open the map.\n");
	else if (error == 2)
		ft_printf("Map is incorrect.\n");
	else if (error == 3)
		ft_printf("There is no path available.\n");
	else if (error == 4)
		ft_printf("Your map is not rectangle.\n");
	else if (error == 5)
		ft_printf("Your map is not big enough.\n");
	else if (error == 6)
		ft_printf("The border of your map can only be '1'.\n");
	else if (error == 7)
		ft_printf("Your map can only contain '1', '0', 'E', 'F' or 'P'.\n");
	else if (error == 8)
		ft_printf("You can only have one player/exit and atleast one coin.\n");
	else if (error == 9)
		ft_printf("Malloc failed !\n");
	else if (error == 10)
		ft_printf("Not all the coin can be looted.\n");
	else if (error == 11)
		ft_printf("Your map has the wrong extension.\n");
	return (0);
}
