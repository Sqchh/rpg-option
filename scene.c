/*
** EPITECH PROJECT, 2021
** scene
** File description:
** scene
*/

#include "option.h"

void scene_mute(option_t *op, text_op_t *op2, sfRenderWindow *wind)
{
    int i = 0;
    if (op->mouse_pos.x >= 1250 && op->mouse_pos.x <= 1355
    && op->mouse_pos.y >= 770 && op->mouse_pos.y <= 875) {
        printf("world");
        i = 1;
    }
    if (i == 1)
        sfRenderWindow_drawText(wind, op2->t_x, NULL);
}

void poll_event_option(option_t *op, text_op_t *op2, sfRenderWindow *wind)
{
    while (sfRenderWindow_pollEvent(wind, &op->event)) {
        if (op->event.type == sfEvtClosed)
            sfRenderWindow_close(wind);
        if (op->event.type == sfEvtMouseButtonPressed
        && op->event.mouseButton.button == sfMouseLeft) {
            printf("hello");
            scene_mute(op, op2, wind);
        }
    }
}