NAME		=	so_long

SRCS		=	so_long.c utils.c parsing.c

OBJS		=	$(SRCS:.c=.o)

CC			=	gcc

CFLAGS		=	-Wall -Wextra -Werror

RM			=	rm -f

all			:	$(NAME)

$(NAME)		:	$(OBJS)
				make -C libft/
				make -C ft_printf/
				make -C gnl/
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS) libft/libft.a ft_printf/libftprintf.a gnl/gnl.a
			
clean		: 
				$(RM) $(OBJS) ft_printf/*.o libft/*.o gnl/*.o

fclean		:	clean
				$(RM) $(NAME) ft_printf/libftprintf.a libft/libft.a gnl/gnl.a

re			:	fclean all

.PHONY		:	all clean fclean re

