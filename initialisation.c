/*
** EPITECH PROJECT, 2021
** init1
** File description:
** init1
*/

#include "option.h"

void init_option(option_t *op)
{
    sfSprite_setPosition(op->window, (sfVector2f){500, 0});
    sfSprite_setTexture(op->window, op->text_wind, sfTrue);
    sfSprite_setPosition(op->sound_bar, (sfVector2f){600, 800});
    sfSprite_setTexture(op->sound_bar, op->text_sound_bar, sfTrue);
    sfSprite_setPosition(op->mute_sound, (sfVector2f){1250, 770});
    sfSprite_setTexture(op->mute_sound, op->text_mute_sound, sfTrue);
    sfSprite_setScale(op->mute_sound, (sfVector2f){0.5, 0.5});
    sfSprite_setPosition(op->sound_bar2, (sfVector2f){600, 640});
    sfSprite_setTexture(op->sound_bar2, op->text_sound_bar2, sfTrue);
    sfSprite_setPosition(op->mute_sound2, (sfVector2f){1250, 600});
    sfSprite_setTexture(op->mute_sound2, op->text_mute_sound2, sfTrue);
    sfSprite_setScale(op->mute_sound2, (sfVector2f){0.5, 0.5});
}

void init_option_texte(text_op_t *op)
{
    sfText_setString(op->t_option, "Settings");
    sfText_setFont(op->t_option, op->fond);
    sfText_setCharacterSize(op->t_option, 60);
    sfText_setPosition(op->t_option, (sfVector2f){780, 40});
    sfText_setString(op->t_music, "Music");
    sfText_setFont(op->t_music, op->music);
    sfText_setCharacterSize(op->t_music, 60);
    sfText_setPosition(op->t_music, (sfVector2f){800, 550});
    sfText_setString(op->t_sfx, "SFX");
    sfText_setFont(op->t_sfx, op->sfx);
    sfText_setCharacterSize(op->t_sfx, 60);
    sfText_setPosition(op->t_sfx, (sfVector2f){800, 720});
    sfText_setString(op->t_lang, "Languages");
    sfText_setFont(op->t_lang, op->lang);
    sfText_setCharacterSize(op->t_lang, 60);
    sfText_setPosition(op->t_lang, (sfVector2f){500, 400});
}

void init_option_texte2(text_op_t *op)
{
    sfText_setString(op->t_x, "X");
    sfText_setFont(op->t_x, op->x);
    sfText_setCharacterSize(op->t_x, 60);
    sfText_setPosition(op->t_x, (sfVector2f){1245, 740});
    sfText_setScale(op->t_x, (sfVector2f){2, 2});
    sfText_setString(op->t_x2, "X");
    sfText_setFont(op->t_x2, op->x2);
    sfText_setCharacterSize(op->t_x2, 60);
    sfText_setPosition(op->t_x2, (sfVector2f){1245, 570});
    sfText_setScale(op->t_x2, (sfVector2f){2, 2});
}

void initialisation(option_t *op, text_op_t *op2)
{
    init_option(op);
    init_option_texte(op2);
    init_option_texte2(op2);
}