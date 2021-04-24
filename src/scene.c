/*
** EPITECH PROJECT, 2021
** scene.c
** File description:
** scene
*/

#include "../include/my_menu.h"

void scene(game_t *gm)
{
    gm->win->mouse_pos.x = sfMouse_getPositionRenderWindow(gm->win->win).x;
    gm->win->mouse_pos.y = sfMouse_getPositionRenderWindow(gm->win->win).y;
    if (gm->scene == 0)
        menu(gm);
    if (gm->scene == 2)
        option(gm);
}
    // if (gm->scene == 1)
    //      play();
    // if (gm->scene == 2)
    //      setting();
    // if (gm->scene == 3)
    //      tutoriel();