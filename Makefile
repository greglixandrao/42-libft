# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gtreviza <gtreviza@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/07 21:27:10 by coder             #+#    #+#              #
#    Updated: 2022/10/08 05:17:35 by gtreviza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_toupper.c ft_tolower.c ft_strncmp.c ft_strlen.c ft_atoi.c \
		ft_strdup.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
		ft_strnstr.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_memchr.c ft_memcmp.c ft_calloc.c ft_substr.c ft_strjoin.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_itoa.c ft_striteri.c ft_strmapi.c ft_strtrim.c ft_split.c
BONUS_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
CC		= gcc -c
INC 	= -I .\libft.h
OBJ		= ${SRCS:.c=.o}
BONUS_OBJ	= $(BONUS_SRC:%.c=%.o)
FLAGS	= -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJ}
	ar -rcs ${NAME} ${OBJ}
	ar -t ${NAME}

${OBJ}:
	${CC} ${FLAGS} ${@:.o=.c} ${INC}
	
bonus: $(BONUS_OBJ)
	ar -rcs ${NAME} ${BONUS_OBJ}
	ar -t ${NAME}

clean:
	rm -f ${OBJ} $(BONUS_OBJ)

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus
