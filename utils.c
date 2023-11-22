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
	if (error == 1)
		printf("Error !\nCould not open the map.\n");
	else if (error == 2)
		printf("Error !\nMap is incorrect.\n");
	else if (error == 3)
		printf("Error ! Some of the coins cannot be looted or there is no path\n");
	return (0);
}
