/*
** EPITECH PROJECT, 2021
** scene.c
** File description:
** scene.c
*/

#include "./../../include/my_menu.h"

void poll_event_option2(game_t *gm)
{
    while (sfRenderWindow_pollEvent(gm->win->win, &gm->opt->event)) {
        if (gm->opt->event.type == sfEvtClosed)
            sfRenderWindow_close(gm->win->win);
        if (gm->opt->event.type == sfEvtMouseButtonPressed
        && gm->opt->event.mouseButton.button == sfMouseLeft) {
            mute_gestion(gm);
        }
    }
}