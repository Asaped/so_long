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

typedef struct s_list5
{
	int		fd;
	int		curlen;
	int		size;
	char	buffer[1];
}				t_list5;

int		parse_map(t_game *info);

int		ft_error(int error);

int		ft_free_info(t_game *info);

char	*get_next_line(int fd);

#endif
