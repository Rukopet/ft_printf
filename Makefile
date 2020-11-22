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
PATHLIB = ./libft
NAMELIB = libft.a
FLAG = -Wall -Werror
PATHSRC = srcs
SRCLIST = $(wildcard $(dir)/*.c)
LIBOBJ = $(wildcard $(PATHLIB)/*.o)
SRC = $(foreach dir, $(PATHSRC), $(SRCLIST))
INC = -I./includes/ -I./libft/
OBJ = $(SRC:.c=.o)

.PHONY: all lib clean fclean re

all: $(NAME) $(SRC) $(NAMELIB)

$(NAME): lib $(OBJ)
	$(CC) $(FLAG) $(SRC) main.c $(INC) -L$(PATHLIB) -lft
	ar rcs $(NAME) $(OBJ) $(LIBOBJ)

.c.o:
	$(CC) -c $(FLAG) $< $(INC) -o $@

lib:
	$(MAKE) bonus -C$(PATHLIB)

clean:
	rm -f $(OBJ)
	$(MAKE) clean -C$(PATHLIB)

fclean: clean
	rm -f $(NAME)
	$(MAKE) fclean -C$(PATHLIB)

re: fclean all