/*
** EPITECH PROJECT, 2021
** option
** File description:
** setting
*/

#include <stdlib.h>
#include <stdio.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <math.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stddef.h>

typedef struct option
{
    sfSprite *background;
    sfTexture *text;
    sfSprite *window;
    sfTexture *text_wind;
    sfSprite *bar_sfx;
    sfTexture *text_sfx_bar;
    sfSprite *mute_sfx;
    sfTexture *text_mute_sfx;
    sfSprite *bar_music;
    sfTexture *text_music_bar;
    sfSprite *mute_music;
    sfTexture *text_mute_music;
    sfEvent event;
    sfVector2i mouse_pos;
    sfSprite *exit;
    sfTexture *t_exit;
    int i;
    int j;
    int k;
    int l;
}option_t;

typedef struct text_op
{
    sfText *t_option;
    sfFont *fond;
    sfText *t_music;
    sfFont *music;
    sfText *t_sfx;
    sfFont *sfx;
    sfText *t_lang;
    sfFont *lang;
    sfText *t_x;
    sfFont *x;
    sfText *t_x2;
    sfFont *x2;
}text_op_t;

typedef struct sound
{
    sfMusic *music;
    sfSound *sound;
    sfSoundBuffer *sound_buffer;
    sfSprite *volume1;
    sfSprite *volume2;
    sfTexture *t_volume;
    sfIntRect r_sfx;
    sfIntRect r_music;
    int vol_sfx;
    int vol_music;
}sound_t;

typedef struct reg_vol
{

}reg_vol_t;

typedef struct langue
{
    sfSprite *case_fr;
    sfTexture *t_case;
    sfSprite *case_en;
    sfSprite *case_es;
    sfText *t_FR;
    sfFont *FR;
    sfText *t_EN;
    sfFont *EN;
    sfText *t_ES;
    sfFont *ES;
}langue_t;

option_t *sprite1(void);
text_op_t *text1(void);
sound_t *sound1(void);
langue_t *langue1(void);
reg_vol_t *vol1(void);
void init_option(option_t *op);
void init_option_texte(text_op_t *op);
void init(option_t *op, text_op_t *op2, langue_t *lang, sound_t *sound);
void init_option_texte2(text_op_t *op);
void scene_mute(option_t *op, text_op_t *op2, sfRenderWindow *wind);
void poll_event_option(option_t *op, text_op_t *op2, sound_t *s, sfRenderWindow *wind);
void init_lang(langue_t *lang);
void init_lang2(langue_t *lang);
void cal(option_t *sprite, text_op_t *text, sound_t *sou, sfRenderWindow *wind);
void mute_sfx(option_t *sprite, text_op_t *text, sfRenderWindow *wind);
void mute_music(option_t *sprite, text_op_t *text, sfRenderWindow *wind);
void unmute_music(option_t *sprite, text_op_t *text, sfRenderWindow *wind);
void unmute_sfx(option_t *sprite, text_op_t *text, sfRenderWindow *wind);
void print_op(option_t *sprite, text_op_t *text, sound_t *sou, sfRenderWindow *wind);