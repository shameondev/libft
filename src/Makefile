# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alorilee <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/15 14:54:18 by alorilee          #+#    #+#              #
#    Updated: 2019/09/28 13:17:58 by alorilee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FUNCTIONS = ft_bzero \
			ft_memcpy \
			ft_memccpy \
			ft_memset \
			ft_memmove \
			ft_memchr \
			ft_memcmp \
			ft_strlen \
			ft_strdup \
			ft_strcpy \
			ft_strncpy \
			ft_strcat \
			ft_strncat \
			ft_strlcat \
			ft_strchr \
			ft_strrchr \
			ft_strstr \
			ft_strnstr \
			ft_strcmp \
			ft_strncmp \
			ft_atoi \
			ft_isalpha \
			ft_isdigit \
			ft_isalnum \
			ft_isascii \
			ft_isprint \
			ft_toupper \
			ft_tolower \
			ft_memalloc \
			ft_memdel \
			ft_strnew \
			ft_strdel \
			ft_strclr \
			ft_striter \
			ft_striteri \
			ft_strmap \
			ft_strmapi \
			ft_strequ \
			ft_strnequ \
			ft_strsub \
			ft_strjoin \
			ft_strtrim \
			ft_putchar \
			ft_putstr \
			ft_putendl \
			ft_putnbr \
			ft_putchar_fd \
			ft_putstr_fd \
			ft_putendl_fd \
			ft_putnbr_fd \
			ft_strsplit \
			ft_wdlen \
			ft_wscount \
			ft_nbrlen \
			ft_itoa \
			ft_lstnew \
			ft_lstdelone \
			ft_lstdel \
			ft_lstiter \
			ft_lstadd \
			ft_lstmap \
			ft_arr_max_val \
			ft_isspace
OBJ = $(patsubst %, %.o, $(FUNCTIONS))
SRC = $(patsubst %, %.c, $(FUNCTIONS))
//SRCP = ./libft/
//INCLUDESP = ./includes/
//INCLUDES =$(wildcard $(INCLUDESP)*.h)
FLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	gcc -I  $(FLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
