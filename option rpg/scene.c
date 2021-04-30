/*
** EPITECH PROJECT, 2021
** scene
** File description:
** scene
*/

#include "option.h"

void mute_gestion(option_t *sprite, text_op_t *text, sound_t *s, sfRenderWindow *wind)
{
    mute_music(sprite, text, wind);
    mute_sfx(sprite, text, wind);
    unmute_music(sprite, text, wind);
    unmute_sfx(sprite, text, wind);
    if (sprite->i == 1)
        sprite->j = 1;
    if (sprite->k == 1)
        sprite->l = 1;
    if (sprite->i == 2)
        sprite->j = 2;
    if (sprite->k == 2)
        sprite->l = 2;
    cal(sprite, text, s, wind);
}

void poll_event_option(option_t *sprite, text_op_t *text, sound_t *s, sfRenderWindow *wind)
{
    while (sfRenderWindow_pollEvent(wind, &sprite->event)) {
        if (sprite->event.type == sfEvtClosed)
            sfRenderWindow_close(wind);
        if (sprite->event.type == sfEvtMouseButtonPressed
        && sprite->event.mouseButton.button == sfMouseLeft) {
            mute_gestion(sprite, text, s, wind);
        }
    }
}

void cal(option_t *sprite, text_op_t *text, sound_t *sou, sfRenderWindow *wind)
{
    if (sprite->k == 1) {
        sfText_setString(text->t_x, "X");
        sfRenderWindow_drawText(wind, text->t_x, NULL);
        sfRenderWindow_drawSprite(wind, sou->volume1, NULL);
        sou->r_sfx.width = 0;
        sfSprite_setTextureRect(sou->volume1, sou->r_sfx);
    }
    if (sprite->i == 1) {
        sfText_setString(text->t_x2, "X");
        sou->vol_music = 0;
        sou->r_music.width = 0;
        sfSprite_setTextureRect(sou->volume2, sou->r_music);
        sfRenderWindow_drawText(wind, text->t_x2, NULL);
        sfMusic_setVolume(sou->music, sou->vol_music);
    }
    print_op(sprite, text, sou, wind);
}