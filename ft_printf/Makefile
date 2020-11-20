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

CC = clang
NAME = libftprintf.a
PATHLIB = ./libft/
NAMELIB = $(PATHLIB)libft.a
FLAG = -Wall -Wextra -Werror
PATHSRC = srcs/
SRC = $(PATHSRC)ft_printf.c
INC = -I./includes/ -I./libft/
OBJ = $(src:.c=.o)
PATHOBJ = obj/

all: $(NAME) $(SRC) $(NAMELIB)

$(NAME): lib $(OBJ)
	$(CC) $(FLAG) $(OBJ) $(INC) -L$(PATHLIB) -lft

lib:
	$(MAKE) -C$(PATHLIB)
	mv libft/libft.a libft.a

.c.o:
	$(CC) -c $(FLAG) $< $(INC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

#ar rcs $(NAME) $(OBJ) $(NAMELIB)
