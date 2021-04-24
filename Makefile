##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Compilation Makefile
##

MY		=	src/

MENU 	=	menu/

STRUCT	=	struct/

SOUND	= 	sound/

EVENT	=	event/

BUTTON 	= 	button/

OPTION	=	option/

SRC	=	./$(MY)main.c				\
		./$(MY)window.c				\
		./$(MY)init.c				\
		./$(MY)scene.c				\
									\
		./$(EVENT)event.c			\
									\
		./$(MENU)menu.c				\
		./$(MENU)set_menu.c			\
		./$(MENU)set_b_menu.c		\
		./$(MENU)set_t_b_menu.c		\
									\
		./$(MENU)$(BUTTON)button.c	\
		./$(MENU)$(BUTTON)hover_b.c	\
		./$(MENU)$(BUTTON)click_b.c	\
									\
		./$(MENU)$(OPTION)initialisation.c 	\
		./$(MENU)$(OPTION)initialisation2.c 	\
		./$(MENU)$(OPTION)scene1.c 	\
		./$(MENU)$(OPTION)scene2.c 	\
		./$(MENU)$(OPTION)scene3.c 	\
		./$(MENU)$(OPTION)settings.c 	\
									\
		./$(STRUCT)struct_fill.c	\
		./$(STRUCT)struct_fill2.c	\
		./$(STRUCT)struct_fill3.c	\
									\
		./$(SOUND)music.c 	\


CFLAGS += -lcsfml-window -lcsfml-graphics -lcsfml-audio -lcsfml-system

NAME = 	my_rpg

$(NAME):
		 gcc $(CFLAGS) -o $(NAME) $(SRC)

all:	$(NAME)

clean:
		rm -f $(NAME)

fclean: clean
		rm -f $(NAME)

re:	fclean all