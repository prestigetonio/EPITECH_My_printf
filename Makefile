##
## EPITECH PROJECT, 2023
## makefile
## File description:
## emacs
##

NAME = libmy.a

SRC = src/my_printf.c	 \
	lib/my/my_putchar.c	 \
	lib/my/my_put_nbr.c	 \
	lib/my/my_put_nbru.c \
	lib/my/my_putstr.c	 \
	lib/my/my_strlen.c	 \

OBJ =  $(SRC:.c=.o)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

all : $(NAME)

clean :
	rm -f $(OBJ)
	rm -f *~
	rm -f #*#

fclean : clean
	rm -f $(NAME)

re : fclean all
