/*
** EPITECH PROJECT, 2020
** graph
** File description:
** main
*/

#include "include.h"
#include "struct.h"

int initialisation(game_t *game);
void set_window(game_t *gm);
window_t *struct_fill_window(void);
menu_t *struct_fill_menu(void);
text_but_menu_t *struct_fill_text_but_menu(void);
but_menu_t *struct_fill_but_menu(void);
title_t *struct_title (void);
game_t *struct_fill_game(void);

void pollevent_menu(game_t *gm);

void scene(game_t *gm);

void button_clicked(game_t *gm);
void button_click(struct game *gm);
void button_hover(game_t *gm);
void button_hover_p(game_t *gm);
void button_hover_o(game_t *gm);
void button_hover_t(game_t *gm);
void button_hover_q(game_t *gm);
void button_click_p(game_t *gm);
void button_click_o(game_t *gm);
void button_click_t(game_t *gm);
void button_click_q(game_t *gm);


void pollevent_menu(game_t *gm);

void menu(game_t *gm);
void init_menu(game_t *gm);
void text_menu(game_t *gm);
void set_menu(game_t *gm);

option_t *opt1(void);
text_op_t *text1(void);
sound_t *sound1(void);
langue_t *langue1(void);
reg_vol_t *vol1(void);
void init_option(game_t *gm);
void init_option_texte(game_t *gm);
void init_option_texte2(game_t *gm);
void init_sound(game_t *gm);
void init_lang(game_t *gm);
void init_lang2(game_t *gm);
void init_reg_vol(game_t *gm);
void init(game_t *gm);
void mute_gestion(game_t *gm);
void scene_mute(game_t *gm);
void poll_event_option(game_t *gm);
void poll_event_option2(game_t *gm);
void cal(game_t *gm);
void mute_sfx(game_t *gm);
void mute_music(game_t *gm);
void unmute_music(game_t *gm);
void unmute_sfx(game_t *gm);
void print_op(game_t *gm);
void print_lang(game_t *gm);
void print_back_sound(game_t *gm);
void print_text_option(game_t *gm);
void option(game_t *gm);