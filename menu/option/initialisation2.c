/*
** EPITECH PROJECT, 2021
** init 2
** File description:
** inti2
*/

#include "./../../include/my_menu.h"

void init_lang(game_t *gm)
{
    sfSprite_setPosition(gm->lang->case_fr, (sfVector2f){1000, 260});
    sfSprite_setTexture(gm->lang->case_fr, gm->lang->t_case, sfTrue);
    sfSprite_setScale(gm->lang->case_fr, (sfVector2f){0.4, 0.4});
    sfSprite_setPosition(gm->lang->case_en, (sfVector2f){1000, 355});
    sfSprite_setTexture(gm->lang->case_en, gm->lang->t_case, sfTrue);
    sfSprite_setScale(gm->lang->case_en, (sfVector2f){0.4, 0.4});
    sfSprite_setPosition(gm->lang->case_es, (sfVector2f){1000, 450});
    sfSprite_setTexture(gm->lang->case_es, gm->lang->t_case, sfTrue);
    sfSprite_setScale(gm->lang->case_es, (sfVector2f){0.4, 0.4});
}

void init_lang2(game_t *gm)
{
    sfText_setString(gm->lang->t_EN, "Anglais");
    sfText_setFont(gm->lang->t_EN, gm->lang->EN);
    sfText_setCharacterSize(gm->lang->t_EN, 60);
    sfText_setPosition(gm->lang->t_EN, (sfVector2f){550, 350});
    sfText_setString(gm->lang->t_FR, "Francais");
    sfText_setFont(gm->lang->t_FR, gm->lang->FR);
    sfText_setCharacterSize(gm->lang->t_FR, 60);
    sfText_setPosition(gm->lang->t_FR, (sfVector2f){550, 260});
    sfText_setString(gm->lang->t_ES, "Espagnol");
    sfText_setFont(gm->lang->t_ES, gm->lang->ES);
    sfText_setCharacterSize(gm->lang->t_ES, 60);
    sfText_setPosition(gm->lang->t_ES, (sfVector2f){550, 450});
}

void init_reg_vol(game_t *gm)
{
}