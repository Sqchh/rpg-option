/*
** EPITECH PROJECT, 2021
** event.c
** File description:
** event
*/

#include "../include/my_menu.h"

void event_gestion_menu(game_t *gm)
{
    // if (gm->win->mouse_pos.x >= 350 && gm->win->mouse_pos.x <= 615.5 &&
    // gm->win->mouse_pos.y >= 350 && gm->win->mouse_pos.y <= 450)
    //     gm->scene = 1;
    if (gm->win->mouse_pos.x >= 350 && gm->win->mouse_pos.x <= 615.5 &&
    gm->win->mouse_pos.y >= 470 && gm->win->mouse_pos.y <= 570)
        gm->scene = 2;
    // if (gm->win->mouse_pos.x >= 350 && gm->win->mouse_pos.x <= 615.5 &&
    // gm->win->mouse_pos.y >= 590 && gm->win->mouse_pos.y <= 690)
    //     gm->scene = 3;
    // if (gm->win->mouse_pos.x >= 350 && gm->win->mouse_pos.x <= 615.5 &&
    // gm->win->mouse_pos.y >= 710 && gm->win->mouse_pos.y <= 810) {
    //     sfRenderWindow_close(gm->win->win);
    // }
}

void pollevent_menu(game_t *gm)
{
    while (sfRenderWindow_pollEvent(gm->win->win, &gm->ev->event)) {
        if (gm->ev->event.type == sfEvtClosed)
            sfRenderWindow_close(gm->win->win);
        button_hover(gm);
        if (gm->ev->event.type == sfEvtMouseButtonPressed &&
        gm->ev->event.mouseButton.button == sfMouseLeft) {
            gm->menu->b_menu->but_pressed = 1;
        }
        if (gm->ev->event.type == sfEvtMouseButtonReleased &&
        gm->ev->event.mouseButton.button == sfMouseLeft) {
            gm->menu->b_menu->but_pressed = 0;
            // sleep_menu(gm);
            event_gestion_menu(gm);
        }
    }
}