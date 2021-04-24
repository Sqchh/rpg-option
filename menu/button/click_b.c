/*
** EPITECH PROJECT, 2021
** menu.c
** File description:
** menu
*/

#include "./../../include/my_menu.h"

void button_click_p(game_t *gm)
{
    if (gm->win->mouse_pos.x >= 800 && gm->win->mouse_pos.x <= 800 + 321 &&
        gm->win->mouse_pos.y >= 400 && gm->win->mouse_pos.y <= 400 + 100) {
        printf("click on p\n");
        sfSleep(sfSeconds(0.35));
    }
}

void button_click_o(game_t *gm)
{
    if (gm->win->mouse_pos.x >= 800 && gm->win->mouse_pos.x <= 800 + 321 &&
        gm->win->mouse_pos.y >= 550 && gm->win->mouse_pos.y <= 550 + 100) {
        option(gm);
        sfSleep(sfSeconds(0.35));
    }
}

void button_click_t(game_t *gm)
{
    if (gm->win->mouse_pos.x >= 800 && gm->win->mouse_pos.x <= 800 + 321 &&
        gm->win->mouse_pos.y >= 700 && gm->win->mouse_pos.y <= 700 + 100) {
        printf("Click on T\n");
        sfSleep(sfSeconds(0.35));
    }
}

void button_click_q(game_t *gm)
{
    if (gm->win->mouse_pos.x >= 800 && gm->win->mouse_pos.x <= 800 + 321 &&
        gm->win->mouse_pos.y >= 850 && gm->win->mouse_pos.y <= 850 + 100) {
        sfSleep(sfSeconds(0.35));
        sfRenderWindow_close(gm->win->win);
        printf("Click on Q\n");
    }
}