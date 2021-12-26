SRCS	=	ft_printf.c \
			libft/ft_putchar.c \
			libft/ft_putstr.c \
			libft/ft_putnbr.c \
			libft/ft_itoa.c \
			libft/ft_strlen.c \
			libft/ft_calloc.c \
			libft/ft_memset.c \
			ft_printf_utils.c \

OBJS	=	${SRCS:.c=.o}

CC		=	gcc

CFLAGS	=	-Wall -Werror -Wextra

NAME	=	libftprintf.a

.c.o:
		${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

all	:	${NAME}

${NAME}	:	${OBJS}
			ar rcs ${NAME} ${OBJS}
			ranlib ${NAME}

f:
		${CC} ${CFLAGS} ${SRCS}

clean:
		rm -f ${OBJS}

fclean:
		clean
		rm -f ${NAME}
re:
		fclean all

bonus:
		echo salut
	
.PHONY: all clean fclean re