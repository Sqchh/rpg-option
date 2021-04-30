/*
** EPITECH PROJECT, 2021
** scene.c
** File description:
** scene.c
*/

#include "./option.h"

void poll_event_option2(option_t *sprite, text_op_t *text, sound_t *s, sfRenderWindow *wind)
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