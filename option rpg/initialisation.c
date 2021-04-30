/*
** EPITECH PROJECT, 2021
** init1
** File description:
** init1
*/

#include "option.h"

void init_option(option_t *sprite)
{
    sfSprite_setPosition(sprite->window, (sfVector2f){500, 0});
    sfSprite_setTexture(sprite->window, sprite->text_wind, sfTrue);
    sfSprite_setPosition(sprite->bar_sfx, (sfVector2f){600, 800});
    sfSprite_setTexture(sprite->bar_sfx, sprite->text_sfx_bar, sfTrue);
    sfSprite_setPosition(sprite->mute_sfx, (sfVector2f){1250, 770});
    sfSprite_setTexture(sprite->mute_sfx, sprite->text_mute_sfx, sfTrue);
    sfSprite_setScale(sprite->mute_sfx, (sfVector2f){0.5, 0.5});
    sfSprite_setPosition(sprite->bar_music, (sfVector2f){600, 640});
    sfSprite_setTexture(sprite->bar_music, sprite->text_music_bar, sfTrue);
    sfSprite_setPosition(sprite->mute_music, (sfVector2f){1250, 600});
    sfSprite_setTexture(sprite->mute_music, sprite->text_mute_music, sfTrue);
    sfSprite_setScale(sprite->mute_music, (sfVector2f){0.5, 0.5});
    sfSprite_setPosition(sprite->exit, (sfVector2f){10, 10});
    sfSprite_setTexture(sprite->exit, sprite->t_exit, sfTrue);
    sfSprite_setScale(sprite->exit, (sfVector2f){0.5, 0.5});
}

void init_option_texte(text_op_t *text)
{
    sfText_setString(text->t_option, "Settings");
    sfText_setFont(text->t_option, text->fond);
    sfText_setCharacterSize(text->t_option, 60);
    sfText_setPosition(text->t_option, (sfVector2f){780, 40});
    sfText_setString(text->t_music, "Music");
    sfText_setFont(text->t_music, text->music);
    sfText_setCharacterSize(text->t_music, 60);
    sfText_setPosition(text->t_music, (sfVector2f){800, 550});
    sfText_setString(text->t_sfx, "SFX");
    sfText_setFont(text->t_sfx, text->sfx);
    sfText_setCharacterSize(text->t_sfx, 60);
    sfText_setPosition(text->t_sfx, (sfVector2f){800, 720});
    sfText_setString(text->t_lang, "Languages");
    sfText_setFont(text->t_lang, text->lang);
    sfText_setCharacterSize(text->t_lang, 60);
    sfText_setPosition(text->t_lang, (sfVector2f){740, 175});
}

void init_option_texte2(text_op_t *text)
{
    sfText_setFont(text->t_x, text->x);
    sfText_setCharacterSize(text->t_x, 60);
    sfText_setPosition(text->t_x, (sfVector2f){1245, 740});
    sfText_setScale(text->t_x, (sfVector2f){2, 2});
    sfText_setFont(text->t_x2, text->x2);
    sfText_setCharacterSize(text->t_x2, 60);
    sfText_setPosition(text->t_x2, (sfVector2f){1245, 570});
    sfText_setScale(text->t_x2, (sfVector2f){2, 2});
}

void init_sound(sound_t *sound)
{
    sfMusic_setLoop(sound->music, sfTrue);
    sfMusic_play(sound->music);
    sfSprite_setTexture(sound->volume1, sound->t_volume, sfTrue);
    sfSprite_setPosition(sound->volume1, (sfVector2f){605, 803});
    sfSprite_setTexture(sound->volume2, sound->t_volume, sfTrue);
    sfSprite_setPosition(sound->volume2, (sfVector2f){605, 643});
    sfSprite_setTextureRect(sound->volume2, sound->r_music);
    sfSprite_setTextureRect(sound->volume1, sound->r_sfx);
}

void init(option_t *sprite, text_op_t *text, langue_t *lang, sound_t *sound)
{
    init_option(sprite);
    init_option_texte(text);
    init_option_texte2(text);
    init_lang(lang);
    init_lang2(lang);
    init_sound(sound);
}