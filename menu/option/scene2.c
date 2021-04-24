/*
** EPITECH PROJECT, 2021
** scene2
** File description:
** scene2
*/

#include "./../../include/my_menu.h"

void mute_sfx(game_t *gm)
{
    if (gm->opt->mous_p.x >= 1250 && gm->opt->mous_p.x <= 1355
    && gm->opt->mous_p.y >= 770 && gm->opt->mous_p.y <= 875) {
        gm->opt->k = 1;
    }
}

void mute_music(game_t *gm)
{
    if (gm->opt->mous_p.x >= 1250
    && gm->opt->mous_p.x <= 1355
    && gm->opt->mous_p.y >= 600 && gm->opt->mous_p.y <= 705)
        gm->opt->i = 1;
}

void unmute_sfx(game_t *gm)
{
    if (gm->opt->mous_p.x >= 1250 && gm->opt->mous_p.x <= 1355
    && gm->opt->mous_p.y >= 770 && gm->opt->mous_p.y <= 875
    && gm->opt->l == 1)
        gm->opt->k = 2;
}

void unmute_music(game_t *gm)
{
    if (gm->opt->mous_p.x >= 1250
    && gm->opt->mous_p.x <= 1355
    && gm->opt->mous_p.y >= 600
    && gm->opt->mous_p.y <= 705 && gm->opt->j == 1) {
        gm->opt->i = 2;
    }
}

void print_op(game_t *gm)
{
    if (gm->opt->i == 2) {
        gm->sound->vol_music = 20;
        gm->sound->r_music.width = 598;
        sfSprite_setTextureRect(gm->sound->volume2, gm->sound->r_music);
        sfMusic_setVolume(gm->sound->music, gm->sound->vol_music);
    }
    if (gm->opt->k == 2) {
        sfRenderWindow_drawSprite(gm->win->win, gm->sound->volume1, NULL);
        gm->sound->r_sfx.width = 598;
        sfSprite_setTextureRect(gm->sound->volume1, gm->sound->r_sfx);
    }
}