/*
** EPITECH PROJECT, 2022
** My_RPG
** File description:
** load_debugger
*/
#include "rpg.h"

debugger_t *load_debugger(void)
{
    debugger_t *new = malloc(sizeof(debugger_t));
    sfFont *font = sfFont_createFromFile("./assets/arial.ttf");

    if (!new)
        return NULL;
    new->debug = true;
    new->all = malloc(sizeof(*new->all) * 5);
    new->all[0] = create_rect(v2f(0, 0), v2f(80, 240), sfYellow);
    new->all[1] = create_rect(v2f(0, 0), v2f(40, 40), sfBlack);
    new->all[2] = create_rect(v2f(0, 0), v2f(40, 40), sfBlack);
    new->all[3] = create_rect(v2f(0, 0), v2f(40, 40), sfBlack);
    new->all[4] = NULL;
    new->text = malloc(sizeof(*new->text) * 5);
    new->text[0] = NULL;
    new->text[1] = create_text("Ghost", 10, font, sfWhite);
    new->text[2] = create_text("Speed\nLess", 10, font, sfWhite);
    new->text[3] = create_text("Speed\nMore", 10, font, sfWhite);
    new->text[4] = NULL;
    new->all_debug = malloc(sizeof(*new->all_debug) * 2);
    new->all_debug[0] = false;
    new->all_debug[1] = NULL;
    return new;
}
