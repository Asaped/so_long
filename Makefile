NAME		=	so_long

SRCS		=	so_long.c utils.c parsing.c get_next_line.c

OBJS		=	$(SRCS:.c=.o)

CC			=	gcc

CFLAGS		=	-Wall -Werror -Wextra

RM			=	rm -f

all			:	$(NAME)

$(NAME)		:	$(OBJS)
				make -C ft_printf/
				make -C libft/
				$(CC) $(CFLAGS) -o $(NAME) ft_printf/libftprintf.a libft/libft.a $(OBJS)
			
clean		: 
				$(RM) $(OBJS) ft_printf/*.o libft/*.o

fclean		:	clean
				$(RM) $(NAME) ft_printf/libftprintf.a libft/libft.a

re			:	fclean all

.PHONY		:	all clean fclean re

