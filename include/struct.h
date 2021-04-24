/*
** EPITECH PROJECT, 2020
** graph
** File description:
** main
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <SFML/System.h>

typedef struct event
{
    sfEvent event;
    sfSound *sound;
    sfSoundBuffer *s_buf;
} event_t;

typedef struct text_but_menu
{
    sfText *play;
    sfText *option;
    sfText *tuto;
    sfText *quit;
    sfFont *font;
} text_but_menu_t;

typedef struct title
{
    sfText *title1;
    sfText *title2;
    sfFont *police;
    sfColor color_title;
} title_t;

typedef struct but_menu
{
    sfSprite *play;
    sfSprite *option;
    sfSprite *tuto;
    sfSprite *quit;
    sfTexture *but_p;
    sfTexture *but_o;
    sfTexture *but_t;
    sfTexture *but_q;
    int but_pressed;
} but_menu_t;

typedef struct menu
{
    sfSprite *background;
    sfTexture *t_background;
    but_menu_t *b_menu;
    text_but_menu_t *t_b_menu;
} menu_t;

typedef struct window
{
    sfRenderWindow *win;
    sfVideoMode video_mode;
    sfVector2u size_window;
    sfVector2i mouse_pos;
} window_t;

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
    sfVector2i mous_p;
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

typedef struct game
{
    int scene;
    window_t *win;
    menu_t *menu;
    event_t *ev;
    title_t *title;
    option_t *opt;
    text_op_t *text;
    sound_t *sound;
    reg_vol_t *vol;
    langue_t *lang;
    int b;
} game_t;