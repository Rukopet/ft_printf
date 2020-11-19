# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egums <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/30 11:45:53 by egums             #+#    #+#              #
#    Updated: 2020/11/06 15:45:41 by egums            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libftprintf.a
PATHLIB = libft/
NAMELIB = $(PATH)libft.a
FLAG = -Wall -Wextra -Werror

SRC = ft_printf.c
PATHSRC = srcs/

INC = -I includes/ -I libft/

OBJ = $(SRC:.c=.o)
PATHOBJ = obj/

#export PATH=/Users/egums/ft_printf/ft_printf

all: $(NAME) $(SRC) $(NAMELIB)

$(NAME): lib $(OBJ)
	$(CC) $(FLAG) main.c $(OBJ) $(INC) -L. -lft

lib:
	make -C$(PATHLIB)

.PHONY: clean fclean all lib re

.c.o:
	$(CC) -c $(FLAG) srcs/$< $(INC) -o $(PATHOBJ)$@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all


#ar rcs $(NAME) $(OBJ) $(NAMELIB)
