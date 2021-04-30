/*
** EPITECH PROJECT, 2021
** struc
** File description:
** struct
*/

#include "option.h"

option_t *sprite1(void)
{
    option_t *op = malloc(sizeof(option_t));
    op->window = sfSprite_create();
    op->text_wind = sfTexture_createFromFile("./option/window.png", NULL);
    op->background = sfSprite_create();
    op->text = sfTexture_createFromFile("./option/background.png", NULL);
    op->bar_sfx = sfSprite_create();
    op->text_sfx_bar = sfTexture_createFromFile("./option/void.png", NULL);
    op->mute_sfx = sfSprite_create();
    op->text_mute_sfx = sfTexture_createFromFile("./option/mute.png", NULL);
    op->bar_music = sfSprite_create();
    op->text_music_bar = sfTexture_createFromFile("./option/void.png", NULL);
    op->mute_music = sfSprite_create();
    op->text_mute_music = sfTexture_createFromFile("./option/mute2.png", NULL);
    op->exit = sfSprite_create();
    op->t_exit = sfTexture_createFromFile("./option/Close.png", NULL);
    op->i = 0;
    op->j = 0;
    op->k = 0;
    op->l = 0;
    return (op);
}

text_op_t *text1(void)
{
    text_op_t *op = malloc(sizeof(text_op_t));
    op->fond = sfFont_createFromFile("./police/space_age.ttf");
    op->t_option = sfText_create();
    op->music = sfFont_createFromFile("./police/space_age.ttf");
    op->t_music = sfText_create();
    op->sfx = sfFont_createFromFile("./police/space_age.ttf");
    op->t_sfx = sfText_create();
    op->lang = sfFont_createFromFile("./police/space_age.ttf");
    op->t_lang = sfText_create();
    op->x = sfFont_createFromFile("./police/neuropol.ttf");
    op->t_x = sfText_create();
    op->x2 = sfFont_createFromFile("./police/neuropol.ttf");
    op->t_x2 = sfText_create();
    return (op);
}

sound_t *sound1(void)
{
    sound_t *sound = malloc(sizeof(sound_t));
    sound->music = sfMusic_createFromFile("./song/music_espace.wav");
    sound->sound = sfSound_create();
    sound->volume1 = sfSprite_create();
    sound->volume2 = sfSprite_create();
    sound->t_volume = sfTexture_createFromFile("./option/rempli.png", NULL);
    sound->vol_music = 0;
    sound->r_music.width = 598;
    sound->r_music.top = 0;
    sound->r_music.height = 24;
    sound->r_music.left = 0;
    sound->r_sfx.width = 598;
    sound->r_sfx.top = 0;
    sound->r_sfx.height = 24;
    sound->r_sfx.left = 0;
    return (sound);
}

langue_t *langue1(void)
{
    langue_t *lang = malloc(sizeof(langue_t));
    lang->t_case = sfTexture_createFromFile("./option/case.png", NULL);
    lang->case_fr = sfSprite_create();
    lang->t_case = sfTexture_createFromFile("./option/case.png", NULL);
    lang->case_en = sfSprite_create();
    lang->t_case = sfTexture_createFromFile("./option/case.png", NULL);
    lang->case_es = sfSprite_create();
    lang->FR = sfFont_createFromFile("./police/space_age.ttf");
    lang->t_FR = sfText_create();
    lang->EN = sfFont_createFromFile("./police/space_age.ttf");
    lang->t_EN = sfText_create();
    lang->ES = sfFont_createFromFile("./police/space_age.ttf");
    lang->t_ES = sfText_create();
    return (lang);
}

reg_vol_t *vol1(void)
{
    reg_vol_t *vol = malloc(sizeof(reg_vol_t));
    return (vol);
}