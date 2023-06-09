##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## compiles mylib
##

SRC 	=	main.c	\

NAME 	=	unit_tests

all:
	make -C lib/

clean:
	make clean -C lib/
	rm -f $(NAME)

fclean: clean
	make fclean -C lib/
	rm -f $(NAME)
	rm -f unit*
	rm -f *.a
	rm -f a.out
	../mr_clean

re: 	fclean all

unit_tests:
	gcc -o $(NAME) tests/tests_criterion.c --coverage -lcriterion -L. -lmy

run_tests:
		./$(NAME)
		gcovr
