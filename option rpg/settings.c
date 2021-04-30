/*
** EPITECH PROJECT, 2021
** setting
** File description:
** menu setting
*/

#include "option.h"

void print_lang(langue_t *lang, sfRenderWindow *wind)
{
    sfRenderWindow_drawSprite(wind, lang->case_fr, NULL);
    sfRenderWindow_drawSprite(wind, lang->case_en, NULL);
    sfRenderWindow_drawSprite(wind, lang->case_es, NULL);
}

void print_back_sound(option_t *sprite, sound_t *sou, sfRenderWindow *wind)
{
    sfSprite_setPosition(sprite->background, (sfVector2f){0, 0});
    sfSprite_setTexture(sprite->background, sprite->text, sfTrue);
    sfRenderWindow_drawSprite(wind, sprite->background, NULL);
    sfRenderWindow_drawSprite(wind, sprite->window, NULL);
    sfRenderWindow_drawSprite(wind, sprite->bar_sfx, NULL);
    sfRenderWindow_drawSprite(wind, sprite->mute_sfx, NULL);
    sfRenderWindow_drawSprite(wind, sprite->bar_music, NULL);
    sfRenderWindow_drawSprite(wind, sprite->mute_music, NULL);
    sfRenderWindow_drawSprite(wind, sprite->exit, NULL);
    sfRenderWindow_drawSprite(wind, sou->volume1, NULL);
    sfRenderWindow_drawSprite(wind, sou->volume2, NULL);
}

void print_text_option(text_op_t *text, langue_t *lang, sfRenderWindow *wind)
{
    sfRenderWindow_drawText(wind, text->t_option, NULL);
    sfRenderWindow_drawText(wind, text->t_music, NULL);
    sfRenderWindow_drawText(wind, text->t_sfx, NULL);
    sfRenderWindow_drawText(wind, text->t_lang, NULL);
    sfRenderWindow_drawText(wind, lang->t_FR, NULL);
    sfRenderWindow_drawText(wind, lang->t_EN, NULL);
    sfRenderWindow_drawText(wind, lang->t_ES, NULL);
}

void option(option_t *sprite, text_op_t *text, langue_t *lang, sound_t *sound)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow* wind;
    wind = sfRenderWindow_create(mode, "rpg", sfResize | sfClose, NULL);
    init(sprite, text, lang, sound);
        while (sfRenderWindow_isOpen(wind)) {
            sfRenderWindow_clear(wind, sfBlack);
            sprite->mouse_pos.x = sfMouse_getPositionRenderWindow(wind).x;
            sprite->mouse_pos.y = sfMouse_getPositionRenderWindow(wind).y;
            print_back_sound(sprite, sound, wind);
            print_lang(lang, wind);
            print_text_option(text, lang, wind);
            poll_event_option(sprite, text, sound, wind);
            cal(sprite, text, sound, wind);
            sfRenderWindow_display(wind);
    }
}

int main(int ac, char **av)
{
    option_t *sprite;
    sprite = sprite1();
    text_op_t *text;
    text = text1();
    sound_t *sound;
    sound = sound1();
    langue_t *lang;
    lang = langue1();
    reg_vol_t *vol;
    vol = vol1();
    if (ac < 1 || ac > 2)
        return (84);
    option(sprite, text, lang, sound);
    return (0);
}