# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 12:09:22 by acrespy           #+#    #+#              #
#    Updated: 2022/11/10 11:38:58 by acrespy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(wildcard ft_*.c)
OBJS = ${SRCS:.c=.o}
LIB = libft.a

NAME = output

CC	= gcc
AR = ar

CFLAGS	= -Wall -Wextra -Werror

RM	= rm -f

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	${AR} -rc ${LIB} ${OBJS}
	ranlib ${LIB}

all:	${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re