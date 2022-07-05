SRCS			=	ft_itoa_base.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c \
					ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlen.c ft_utoa.c

OBJS			=	$(SRCS:.c=.o)

NAME			= libft.a

CC				= cc

CFLAGS			= -Wall -Wextra -Werror

RM				= rm -f
			
all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re bonus