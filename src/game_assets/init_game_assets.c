/*
** EPITECH PROJECT, 2022
** Dev---Rpg
** File description:
** init_game_assets
*/

#include "rpg.h"

lean_bottle_t *init_bottle_of_lean(const int *pos)
{
    lean_bottle_t *lean = malloc(sizeof(lean_bottle_t));

    lean->sprite = sfSprite_create();
    lean->texture = sfTexture_createFromFile(LEAN_BOTTLE, NULL);
    lean->size = v2f(1, 1);
    lean->position = v2f(pos[0], pos[1]);
    lean->taked = false;

    sfSprite_setTexture(lean->sprite, lean->texture, sfTrue);
    sfSprite_setScale(lean->sprite, lean->size);
    if (pos != NULL)
        sfSprite_setPosition(lean->sprite, lean->position);
    else
        sfSprite_setPosition(lean->sprite, v2f(0, 0));
    return (lean);
}

lean_bottle_t **array_of_lean(const int number, int lean_coord[4][2])
{
    lean_bottle_t **lean = malloc(sizeof(lean_bottle_t) * (number + 1));
    int cpt = 0;
    int cpt_coord = 0;

    while (cpt != number) {
        lean[cpt] = init_bottle_of_lean(lean_coord[cpt_coord]);
        cpt++;
        cpt_coord++;
    }
    lean[cpt] = NULL;
    return (lean);
}
