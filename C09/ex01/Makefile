# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/23 22:17:17 by marvin            #+#    #+#              #
#    Updated: 2024/01/20 19:14:39 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_putchar.c \
	srcs/ft_swap.c \
	srcs/ft_putstr.c \
	srcs/ft_strlen.c \
	srcs/ft_strcmp.c
OBJS = ${SRCS:.c=.o}
INCS = includes
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all : ${NAME}

${NAME} : ${OBJS}
	ar rc ${NAME} ${OBJS}

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCS}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all