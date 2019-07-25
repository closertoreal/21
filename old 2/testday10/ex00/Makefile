# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbennard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/29 15:35:37 by hbennard          #+#    #+#              #
#    Updated: 2018/10/29 16:32:30 by hbennard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCLUDES = includes/

SOURCES = srcs/

all: create

create:
	gcc -c $(SOURCES)/ft_putchar.c $(SOURCES)/ft_putstr.c $(SOURCES)/ft_strcmp.c $(SOURCES)/ft_strlen.c $(SOURCES)/ft_swap.c -I $(INCLUDES)
	ar rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o 

clean:
	/bin/rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

fclean:
	/bin/rm -f libft.a

re:	fclean	all
