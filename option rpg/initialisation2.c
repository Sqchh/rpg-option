/*
** EPITECH PROJECT, 2021
** init 2
** File description:
** inti2
*/

#include "option.h"

void init_lang(langue_t *lang)
{
    sfSprite_setPosition(lang->case_fr, (sfVector2f){1000, 260});
    sfSprite_setTexture(lang->case_fr, lang->t_case, sfTrue);
    sfSprite_setScale(lang->case_fr, (sfVector2f){0.4, 0.4});
    sfSprite_setPosition(lang->case_en, (sfVector2f){1000, 355});
    sfSprite_setTexture(lang->case_en, lang->t_case, sfTrue);
    sfSprite_setScale(lang->case_en, (sfVector2f){0.4, 0.4});
    sfSprite_setPosition(lang->case_es, (sfVector2f){1000, 450});
    sfSprite_setTexture(lang->case_es, lang->t_case, sfTrue);
    sfSprite_setScale(lang->case_es, (sfVector2f){0.4, 0.4});
}

void init_lang2(langue_t *lang)
{
    sfText_setString(lang->t_EN, "Anglais");
    sfText_setFont(lang->t_EN, lang->EN);
    sfText_setCharacterSize(lang->t_EN, 60);
    sfText_setPosition(lang->t_EN, (sfVector2f){550, 350});
    sfText_setString(lang->t_FR, "Francais");
    sfText_setFont(lang->t_FR, lang->FR);
    sfText_setCharacterSize(lang->t_FR, 60);
    sfText_setPosition(lang->t_FR, (sfVector2f){550, 260});
    sfText_setString(lang->t_ES, "Espagnol");
    sfText_setFont(lang->t_ES, lang->ES);
    sfText_setCharacterSize(lang->t_ES, 60);
    sfText_setPosition(lang->t_ES, (sfVector2f){550, 450});
}

void init_reg_vol(reg_vol_t *vol)
{

}