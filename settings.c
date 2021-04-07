/*
** EPITECH PROJECT, 2021
** setting
** File description:
** menu setting
*/

#include "option.h"

void print_sprite_background(option_t *op, sfRenderWindow *wind)
{
    sfSprite_setPosition(op->background, (sfVector2f){0, 0});
    sfSprite_setTexture(op->background, op->text, sfTrue);
    sfRenderWindow_drawSprite(wind, op->background, NULL);
}

void print_sprite_window_sound(option_t *op, sfRenderWindow *wind)
{
    sfRenderWindow_drawSprite(wind, op->window, NULL);
    sfRenderWindow_drawSprite(wind, op->sound_bar, NULL);
    sfRenderWindow_drawSprite(wind, op->mute_sound, NULL);
    sfRenderWindow_drawSprite(wind, op->sound_bar2, NULL);
    sfRenderWindow_drawSprite(wind, op->mute_sound2, NULL);
}

void print_text_option(text_op_t *op, sfRenderWindow *wind)
{
    sfRenderWindow_drawText(wind, op->t_option, NULL);
    sfRenderWindow_drawText(wind, op->t_music, NULL);
    sfRenderWindow_drawText(wind, op->t_sfx, NULL);
    sfRenderWindow_drawText(wind, op->t_lang, NULL);
}

void option(option_t *op, text_op_t *op2)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow* wind;
    wind = sfRenderWindow_create(mode, "rpg", sfResize | sfClose, NULL);
    initialisation(op, op2);
        while (sfRenderWindow_isOpen(wind)) {
            sfRenderWindow_clear(wind, sfBlack);
            op->mouse_pos.x = sfMouse_getPositionRenderWindow(wind).x;
            op->mouse_pos.y = sfMouse_getPositionRenderWindow(wind).y;
            print_sprite_background(op, wind);
            print_sprite_window_sound(op, wind);
            print_text_option(op2, wind);
            poll_event_option(op, op2, wind);
            sfRenderWindow_display(wind);
    }
}

int main(int ac, char **av)
{
    option_t *op;
    op = op2();
    text_op_t *op2;
    op2 = op3();
    if (ac < 1 || ac > 2)
        return (84);
    option(op, op2);
    return (0);
}