SRCS	 = ft_isalpha.c ft_isprint.c ft_isascii.c ft_isdigit.c ft_isalnum.c ft_calloc.c \
		   ft_bzero.c ft_strlen.c ft_memset.c ft_memcpy.c ft_memmove.c ft_toupper.c \
		   ft_tolower.c ft_strchr.c ft_strrchr.c ft_memchr.c ft_memcmp.c ft_strncmp.c \
		   ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c ft_strdup.c ft_substr.c \
		   ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_putchar_fd.c ft_putendl_fd.c \
		   ft_putstr_fd.c ft_putnbr_fd.c ft_split.c ft_itoa.c ft_striteri.c \
		   ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		   ft_lstdelone.c ft_lstclear.c ft_lstiter.c

BNS	  	 =

OBJS	 = $(SRCS:.c=.o)

BNS_OBJS = $(BNS:.c=.o)

NAME	 = libft.a

RM		 = rm -rf

CC		 = gcc

CFLAGS	 = -Wall -Wextra -Werror

so:
		$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
		gcc -nostartfiles -shared -o libft.so $(OBJS)

all	 	 : $(NAME)

$(NAME)	 : $(OBJS)
		 ar rcs $(NAME) $(OBJS)

bonus	 : $(OBJS) $(BNS_OBJS)
		 ar rcs $(NAME) $(OBJS) $(BNS_OBJS)

clean	 :
		 $(RM) $(OBJS) $(BNS_OBJS)

fclean	 : clean
		 $(RM) $(NAME)

re		 : fclean all

.PHONY	 : all fclean clean re
