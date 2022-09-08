# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: coder <coder@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/07 21:27:10 by coder             #+#    #+#              #
#    Updated: 2022/09/08 02:33:09 by coder            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror
LIBFT_A = libft.a

all:
	$(CC) -c $(FLAGS) *.c -I libft.h
	ar -rc libft.a *.o

clean:
	rm -rf *.o

fclean: clean
	rm -rf *.a
re:
	