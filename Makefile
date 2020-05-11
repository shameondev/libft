# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alorilee <alorilee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/19 10:32:39 by alorilee          #+#    #+#              #
#    Updated: 2020/05/12 02:27:11 by alorilee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS	= $(shell ls ./src | grep -E "ft_.+\.c") \
		get_next_line.c

OBJS	= $(addprefix $(OBJDIR),$(SRCS:.c=.o))

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

OBJDIR	= ./obj/
SRCDIR	= ./src/


all:  obj $(NAME)

obj:
	mkdir -p $(OBJDIR)

$(OBJDIR)%.o:$(SRCDIR)%.c
	$(CC) $(CFLAGS) -o $@ -c $<
	
$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
