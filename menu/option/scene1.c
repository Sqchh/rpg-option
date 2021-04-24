/*
** EPITECH PROJECT, 2021
** scene
** File description:
** scene
*/

#include "./../../include/my_menu.h"

void mute_gestion(game_t *gm)
{
    mute_music(gm);
    mute_sfx(gm);
    unmute_music(gm);
    unmute_sfx(gm);
    if (gm->opt->i == 1)
        gm->opt->j = 1;
    if (gm->opt->k == 1)
        gm->opt->l = 1;
    if (gm->opt->i == 2)
        gm->opt->j = 2;
    if (gm->opt->k == 2)
        gm->opt->l = 2;
    cal(gm);
}

void poll_event_option(game_t *gm)
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

void cal(game_t *gm)
{
    if (gm->opt->k == 1) {
        sfText_setString(gm->text->t_x, "X");
        sfRenderWindow_drawText(gm->win->win, gm->text->t_x, NULL);
        sfRenderWindow_drawSprite(gm->win->win, gm->sound->volume1, NULL);
        gm->sound->r_sfx.width = 0;
        sfSprite_setTextureRect(gm->sound->volume1, gm->sound->r_sfx);
    }
    if (gm->opt->i == 1) {
        sfText_setString(gm->text->t_x2, "X");
        gm->sound->vol_music = 0;
        gm->sound->r_music.width = 0;
        sfSprite_setTextureRect(gm->sound->volume2, gm->sound->r_music);
        sfRenderWindow_drawText(gm->win->win, gm->text->t_x2, NULL);
        sfMusic_setVolume(gm->sound->music, gm->sound->vol_music);
    }
    print_op(gm);
}