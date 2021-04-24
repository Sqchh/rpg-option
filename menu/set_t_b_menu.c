/*
** EPITECH PROJECT, 2020
** graph
** File description:
** main
*/

#include "./../include/my_menu.h"

void text_menu(game_t *gm)
{
    sfText_setFont(gm->menu->t_b_menu->play, gm->menu->t_b_menu->font);
    sfText_setFont(gm->menu->t_b_menu->option, gm->menu->t_b_menu->font);
    sfText_setFont(gm->menu->t_b_menu->quit, gm->menu->t_b_menu->font);
    sfText_setFont(gm->menu->t_b_menu->tuto, gm->menu->t_b_menu->font);
    sfText_setFont(gm->title->title1, gm->title->police);
    sfText_setFont(gm->title->title2, gm->title->police);
    sfText_setCharacterSize(gm->menu->t_b_menu->play, 10);
    sfText_setCharacterSize(gm->menu->t_b_menu->option, 1);
    sfText_setCharacterSize(gm->menu->t_b_menu->tuto, 1);
    sfText_setCharacterSize(gm->menu->t_b_menu->quit, 1);
    sfText_setString(gm->title->title1, "MY RPG");
    sfText_setString(gm->title->title2, "SPACE");
    sfText_setPosition(gm->title->title1, (sfVector2f){700, 50});
    sfText_setPosition(gm->title->title2, (sfVector2f){730, 140});
    sfText_setCharacterSize(gm->title->title1, 100);
    sfText_setCharacterSize(gm->title->title2, 100);
    sfText_setOutlineColor(gm->title->title1, sfBlack);
    sfText_setOutlineColor(gm->title->title2, sfBlack);
}