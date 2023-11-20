#include "so_long.h"

int	ft_free_info(t_game *info)
{
	int	i;

	i = -1;
	while (++i < info->y)
		free(info->map[i]);
	if (info->map)
		free(info->map);
	return (0);
}

int	ft_error(int error)
{
	if (error == 1)
		ft_printf("Error !\nCould not open the map.\n");
	else if (error == 2)
		ft_printf("Error !\nMap is incorrect.\n");
	return (0);
}
