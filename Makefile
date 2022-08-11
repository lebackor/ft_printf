# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lebackor <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/27 18:17:49 by lebackor          #+#    #+#              #
#    Updated: 2021/12/27 18:18:26 by lebackor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_printf.c \
			libft/ft_putchar.c \
			libft/ft_putstr.c \
			libft/ft_putnbr.c \
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

fclean:	clean
		rm -f ${NAME}

re:	fclean all

bonus:
		
	
.PHONY: all clean fclean re
