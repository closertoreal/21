HEADER = ft_list.h

SRCS_DIR = ./srcs/

HEADER_DIR = ./header/

RUSH_DIR = ./rush/

FILE_NAME = colle-2

all: 
	gcc -o $(FILE_NAME) $(wildcard $(RUSH_DIR)*.c) $(wildcard $(SRCS_DIR)*.c) main.c -I $(HEADER_DIR)$(HEADER)


clean:
	rm $(FILE_NAME)

fclean: clean

re: fclean all
