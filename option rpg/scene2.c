/*
** EPITECH PROJECT, 2021
** scene2
** File description:
** scene2
*/

#include "./option.h"

void mute_sfx(option_t *sprite, text_op_t *text, sfRenderWindow *wind)
{
    if (sprite->mouse_pos.x >= 1250 && sprite->mouse_pos.x <= 1355
    && sprite->mouse_pos.y >= 770 && sprite->mouse_pos.y <= 875) {
        sprite->k = 1;
    }
}

void mute_music(option_t *sprite, text_op_t *text, sfRenderWindow *wind)
{
    if (sprite->mouse_pos.x >= 1250
    && sprite->mouse_pos.x <= 1355
    && sprite->mouse_pos.y >= 600 && sprite->mouse_pos.y <= 705)
        sprite->i = 1;
}

void unmute_sfx(option_t *sprite, text_op_t *text, sfRenderWindow *wind)
{
    if (sprite->mouse_pos.x >= 1250 && sprite->mouse_pos.x <= 1355
    && sprite->mouse_pos.y >= 770 && sprite->mouse_pos.y <= 875
    && sprite->l == 1)
        sprite->k = 2;
}

void unmute_music(option_t *sprite, text_op_t *text, sfRenderWindow *wind)
{
    if (sprite->mouse_pos.x >= 1250
    && sprite->mouse_pos.x <= 1355
    && sprite->mouse_pos.y >= 600
    && sprite->mouse_pos.y <= 705 && sprite->j == 1) {
        sprite->i = 2;
    }
}

void print_op(option_t *sprite, text_op_t *text, sound_t *sou, sfRenderWindow *wind)
{
    if (sprite->i == 2) {
        sou->vol_music = 20;
        sou->r_music.width = 598;
        sfSprite_setTextureRect(sou->volume2, sou->r_music);
        sfMusic_setVolume(sou->music, sou->vol_music);
    }
    if (sprite->k == 2) {
        sfRenderWindow_drawSprite(wind, sou->volume1, NULL);
        sou->r_sfx.width = 598;
        sfSprite_setTextureRect(sou->volume1, sou->r_sfx);
    }
}