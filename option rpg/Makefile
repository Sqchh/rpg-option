##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## makefile
##

SRC 	= 	settings.c 	\
			struct.c 	\
			initialisation.c 	\
			scene.c 	\
			initialisation2.c 	\
			scene2.c 	\
			scene3.c 	\

CSFMLW	=	-lcsfml-window

CSFMLS	=	-lcsfml-system

CSFMLG	=	-lcsfml-graphics

CSFMLSO	=	-lcsfml-audio

INC	=	-include option.h

TFLAGS	=	-lcriterion -fprofile-arcs -ftest-coverage

OBJ	=	$(SRC:.c=.o)

NAME	=	my_RPG

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CSFMLW) $(CSFMLS) $(CSFMLG) $(CSFMLSO)
clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	clean fclean all