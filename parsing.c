#include "so_long.h"

static int	get_size(t_game *info)
{
	char	*line;
	int		i;
	int		fd;

	fd = info->fd;
	line = get_next_line(fd);
	i = 0;
	while (line)
	{
		while (line[i])
			i++;
		if (info->x != i && info->y != 0)
			return (0);
		info->x = i;
		info->y++;
		line = get_next_line(fd);
	}
	if (!info->x || !info->y)
		return (0);
	return (1);
}

static int	is_map_ok(t_game *info)
{
	int	i;
	int	j;

	i = -1;
	while (++i < info->y)
	{
		j = -1;
		while (++j < info->x)
		{
			if ((i == 0 || i == info->y - 1 || j == 0 || j == info->x - 1) && info->map[i][j] != '1')
				return (0);
			else if (i != 0 && i != info->y - 1 && j != 0 && j != x - 1 && info->map[i][j] != '1' && info->map[i][j] != '0' && info->map[i][j] != 'F' && info->map[i][j] != '

		}
	}
}

int	parse_map(t_game *info)
{
	int	i;

	i = -1;
	if (!get_size(info))
		return (0);
	info->map = malloc(sizeof(char *) * (info->y + 1));
	if (!map)
		return (0);
	info->map[info->y] = NULL;
	while (++i < info->y)
	{
		info->map[i] = get_next_line(info->fd);
		ft_printf("%s\n", info->map[i]);
	}
	if (!is_map_ok(info))
		return (ft_free_info(info));
}
