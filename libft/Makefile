# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egums <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/30 11:45:53 by egums             #+#    #+#              #
#    Updated: 2020/11/01 16:13:50 by egums            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft.a
FLAG = -Wall -Wextra -Werror
SRC =	ft_memcmp.c ft_memchr.c ft_memcpy.c ft_memccpy.c ft_memmove.c	\
		ft_bzero.c ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c	\
		ft_isprint.c ft_toupper.c ft_isascii.c ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_strncmp.c ft_strlcat.c ft_strlcpy.c ft_strnstr.c\
		ft_atoi.c ft_memset.c ft_calloc.c ft_strdup.c
INC = -I ./
OBJ = $(SRC:.c=.o)

all: $(NAME) $(SRC)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)

.c.o:
	@$(CC) -c $(FLAG) $< $(INC) 

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all
