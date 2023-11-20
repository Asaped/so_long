# ifndef SO_LONG_H
#define SO_LONG_H

# include <fcntl.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <unistd.h>
# include "ft_printf/ft_printf.h"
# include "libft/libft.h"

typedef struct s_game
{
	int		fd;
	char	**map;
	char	*name_map;
	int		x;
	int		y;
}				t_game;

int		parse_map(t_game *info);

int		ft_error(int error);

#endif
