# ifndef SO_LONG_H
#define SO_LONG_H

# include <fcntl.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <unistd.h>
# include "ft_printf/ft_printf.h"
# include "libft/libft.h"
# include "gnl/get_next_line.h"

typedef struct s_game
{
	int		fd;
	char	**map;
	char	**map_copy;
	char	*name_map;
	int		x;
	int		y;
	int		start[2];
	int		end[2];
	int		max_coin;
	int		coin;
}				t_game;

int		parse_map(t_game *info);

int		ft_error(int error);

int		ft_free_info(t_game *info);

#endif
