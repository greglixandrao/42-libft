# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gtreviza <gtreviza@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/07 21:27:10 by coder             #+#    #+#              #
#    Updated: 2022/09/24 20:05:53 by gtreviza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libft.a
SRCS 	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_toupper.c ft_tolower.c ft_strncmp.c ft_strlen.c ft_atoi.c \
		ft_strdup.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
		ft_strnstr.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_memchr.c ft_memcmp.c ft_calloc.c
CC 		= gcc -c
INC 	= -I .\libft.h
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
