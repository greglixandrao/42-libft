# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gtreviza <gtreviza@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/07 21:27:10 by coder             #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2022/09/09 19:59:43 by gtreviza         ###   ########.fr        #
=======
#    Updated: 2022/09/10 23:14:13 by gtreviza         ###   ########.fr        #
>>>>>>> fdc45da82c11cf722c9ccdd6c7526c92b1e16d1b
#                                                                              #
# **************************************************************************** #

NAME 	= libft.a
SRCS 	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
<<<<<<< HEAD
		ft_toupper.c ft_tolower.c ft_strlen.c ft_atoi.c ft_strdup.c
=======
		ft_toupper.c ft_tolower.c ft_strncmp.c ft_strlen.c ft_atoi.c \
		ft_strdup.c
>>>>>>> fdc45da82c11cf722c9ccdd6c7526c92b1e16d1b
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
