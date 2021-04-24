/*
** EPITECH PROJECT, 2020
** graph
** File description:
** main
*/

#include "./../include/my_menu.h"

int main(int ac, char **av)
{
    if (ac != 1)
        return (84);
    game_t *game;
    game = struct_fill_game();
    initialisation(game);
    while (sfRenderWindow_isOpen(game->win->win)) {
            scene(game);
            sfRenderWindow_display(game->win->win);
    }
    return (0);
}