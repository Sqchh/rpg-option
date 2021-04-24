/*
** EPITECH PROJECT, 2020
** graph
** File description:
** main
*/

#include "./../include/my_menu.h"

int initialisation(game_t *game)
{
    set_window(game);
    set_menu(game);
    init_menu(game);
    text_menu(game);
    return (0);
}