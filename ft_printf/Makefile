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
PATHLIB = ./libft/
NAMELIB = libft.a
FLAG = -Wall -Wextra -Werror
PATHSRC = srcs
SRCLIST = $(wildcard $(dir)/*.c)
SRC = $(foreach dir, $(PATHSRC), $(SRCLIST))
INC = -I./includes/ -I./libft/
OBJ = $(src:.c=.o)
PATHOBJ = obj/

.PHONY: all lib clean fclean re

all: $(NAME) $(SRC) $(NAMELIB)

$(NAME): lib $(OBJ)
	$(CC) $(FLAG) $(SRC) main.c $(INC) -L. -lft
	ar rcs $(NAME) $(OBJ) $(NAMELIB)

lib:
	$(MAKE) bonus -C$(PATHLIB)
	mv libft/libft.a libft.a

.c.o:
	$(CC) -c $(FLAG) $< $(INC)

clean:
	rm -f $(OBJ) $(NAMELIB)
	$(MAKE) clean -C$(PATHLIB)

fclean: clean
	rm -f $(NAME) $(NAMELIB)
	$(MAKE) fclean -C$(PATHLIB)

re: fclean all