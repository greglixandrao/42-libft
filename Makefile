# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gtreviza <gtreviza@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/07 21:27:10 by coder             #+#    #+#              #
#    Updated: 2022/09/11 23:48:18 by gtreviza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libft.a
SRCS 	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_toupper.c ft_tolower.c ft_strncmp.c ft_strlen.c ft_atoi.c \
		ft_strdup.c ft_strlcpy.c
CC 		= gcc -c
INC 	= -I libft.h
OBJ 	= ${SRCS:.c=.o}
FLAGS 	= -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJ}
	ar -rcs ${NAME} ${OBJ}
	ar -t ${NAME}

${OBJ}:
	${CC} ${FLAGS} ${@:.o=.c} ${INC}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all
