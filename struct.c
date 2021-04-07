/*
** EPITECH PROJECT, 2021
** struc
** File description:
** struct
*/

#include "option.h"

option_t *op2(void)
{
    option_t *op = malloc(sizeof(option_t));
    op->window = sfSprite_create();
    op->text_wind = sfTexture_createFromFile("./option/window.png", NULL);
    op->background = sfSprite_create();
    op->text = sfTexture_createFromFile("background2.png", NULL);
    op->sound_bar = sfSprite_create();
    op->text_sound_bar = sfTexture_createFromFile("./option/void.png", NULL);
    op->mute_sound = sfSprite_create();
    op->text_mute_sound = sfTexture_createFromFile("./option/mute.png", NULL);
    op->sound_bar2 = sfSprite_create();
    op->text_sound_bar2 = sfTexture_createFromFile("./option/void.png", NULL);
    op->mute_sound2 = sfSprite_create();
    op->text_mute_sound2 = sfTexture_createFromFile("./option/mute2.png", NULL);
    return (op);
}

text_op_t *op3(void)
{
    text_op_t *op = malloc(sizeof(text_op_t));
    op->fond = sfFont_createFromFile("space_age.ttf");
    op->t_option = sfText_create();
    op->music = sfFont_createFromFile("space_age.ttf");
    op->t_music = sfText_create();
    op->sfx = sfFont_createFromFile("space_age.ttf");
    op->t_sfx = sfText_create();
    op->lang = sfFont_createFromFile("space_age.ttf");
    op->t_lang = sfText_create();
    op->x = sfFont_createFromFile("neuropol.ttf");
    op->t_x = sfText_create();
    op->x2 = sfFont_createFromFile("neuropol.ttf");
    op->t_x2 = sfText_create();
    return (op);
}

