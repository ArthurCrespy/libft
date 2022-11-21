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
SRCS_BONUS = $(wildcard ft_*_bonus.c)
OBJS = ${SRCS:.c=.o}
OBJS_BONUS = ${SRCS_BONUS:.c=.o}

NAME = libft.a

CC	= gcc
CFLAGS	= -Wall -Wextra -Werror

AR = ar
ARFLAGS = -rc

RM	= rm -rf

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	${AR} ${ARFLAGS} ${NAME} ${OBJS}
	ranlib ${NAME}

all:	${NAME}

bonus:	${OBJS_BONUS}
	${AR} ${ARFLAGS} ${NAME} ${OBJS_BONUS}
	ranlib ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re:	fclean all

.PHONY:	all bonus clean fclean re
