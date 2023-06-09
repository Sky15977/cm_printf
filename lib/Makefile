##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## compiles mylib
##

SRC 	=	my_put.c	\
		my_strlen.c	\
		my_printf.c 	\
		my_printf_basics.c	\
		long_printf.c	\
		h_printf.c	\
		my_printf_sign.c	\
		my_putspaces.c	\
		my_getnbr.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all: 	$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)
		cp $(NAME) ../
		rm *.o

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: 	fclean all
