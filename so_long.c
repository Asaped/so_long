#include "so_long.h"

int	main(int ac, char **av)
{
	t_game	info;

	if (ac == 2)
	{
		info.fd = open(av[1], O_RDONLY);
		if (info.fd == -1)
			return (ft_error(1));
		info.name_map = av[1];
		info.x = 0;
		info.y = 0;
		info.coin = 0;
		if (!parse_map(&info))
			return (0);
	}
	else
		ft_printf("Error !\nUsage : ./so_long map.ber\n");
	return (0);
}
