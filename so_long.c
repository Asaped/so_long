/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moturki <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:31:11 by moturki           #+#    #+#             */
/*   Updated: 2023/11/22 13:08:05 by moturki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	init_args(t_game *info, char *av)
{
	int	i;

	i = 0;
	while (av[i])
		i++;
	if (av[i - 1] != 'r' || av[i - 2] != 'e'
		|| av[i - 3] != 'b' || av[i - 4] != '.')
		return (ft_error(11));
	info->fd = open(av, O_RDONLY);
	if (info->fd == -1)
		return (ft_error(1));
	info->name_map = av;
	info->x = 0;
	info->y = 0;
	info->coin = 0;
	return (1);
}

int	main(int ac, char **av)
{
	t_game	info;

	if (ac == 2)
	{
		if (!init_args(&info, av[1]) || !parse_map(&info))
			return (0);
	}
	else
		ft_printf("Error !\nUsage : ./so_long map.ber\n");
	return (0);
}
