OBJS	= ${SRCS:.c=.o}

SRCS = ft_display.c ft_get_char.c ft_get_digit.c ft_get_ptr.c ft_get_str.c \
		ft_get_uni_int.c ft_hex.c ft_hexes.c ft_num_len.c ft_printf.c \
		ft_put_char.c ft_put_nbr.c ft_put_str.c ft_strlen.c ft_uni_hex.c \

NAME = libftprintf.a

CC	= gcc
RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror

all:		${NAME}

$(NAME):	${OBJS}
			ar rcs ${NAME} $?

%.o	:	%.c ft_printf.h
		${CC}	${CFLAGS}	 -c $< -o ${<:.c=.o}


clean:
			${RM} ${OBJS} ${OBJS_B}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re