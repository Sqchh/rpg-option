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
    sfSprite *sound_bar;
    sfTexture *text_sound_bar;
    sfSprite *mute_sound;
    sfTexture *text_mute_sound;
    sfSprite *sound_bar2;
    sfTexture *text_sound_bar2;
    sfSprite *mute_sound2;
    sfTexture *text_mute_sound2;
    sfEvent event;
    sfVector2i mouse_pos;
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

option_t *op2(void);
text_op_t *op3(void);
void init_option(option_t *op);
void init_option_texte(text_op_t *op);
void initialisation(option_t *op, text_op_t *op2);
void init_option_texte2(text_op_t *op);
void scene_mute(option_t *op, text_op_t *op2, sfRenderWindow *wind);
void poll_event_option(option_t *op, text_op_t *op2, sfRenderWindow *wind);