# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvoyance <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/19 10:32:39 by lvoyance          #+#    #+#              #
#    Updated: 2019/12/19 12:06:01 by lvoyance         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
SRC = ./src/validator.c \
      ./src/spliter.c \
      ./src/main.c \
      ./src/solver.c

HDR = ./src/fillit.h

OBJ = *.o

LBFT = libft/

LIB = *.c

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	make -C $(LBFT)
	gcc $(FLAGS) -o $(NAME)  -I $(HDR) $(SRC) -L. libft/libft.a
clean:
	/bin/rm -f $(OBJ)
	make -C $(LBFT) clean
fclean: clean
	/bin/rm -f $(NAME)
	make -C $(LBFT) fclean
re: fclean all
