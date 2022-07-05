SRC = 			sources/
SRCS			=	$(SRC)ft_printf.c $(SRC)ptr_to_hex.c

OBJS			=	$(SRCS:.c=.o)

INCLUDE		= 	include/
LIBFT_DIR		= ./libft
LIBFT			= ./libft/libft.a

NAME			= libftprintf.a

CC				= cc

CFLAGS			= -Wall -Wextra -Werror -I $(INCLUDE)

RM				= rm -f
			
all:			$(NAME)

$(NAME):		$(LIBFT) $(OBJS)
				cp $(LIBFT) $(NAME)
				ar rcs $(NAME) $(OBJS)

$(LIBFT):		$(LIBFT_DIR)
				$(MAKE) -C $(LIBFT_DIR)

clean:
				$(MAKE) clean -C $(LIBFT_DIR)
				$(RM) $(OBJS)

fclean:			clean
				$(MAKE) fclean -C $(LIBFT_DIR)
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re bonus