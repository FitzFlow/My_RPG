/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** init_pnj
*/
#include "pnj.h"
#include "rpg.h"
#include "define.h"
#include <stdlib.h>

ai_t *init_ai(void)
{
    ai_t *new = NULL;

    new = malloc(sizeof(ai_t));
    new->pattern = NULL;
    return new;
}

pnj_t *create_pnj(char const *texture)
{
    pnj_t *pnj = NULL;
    pnj = malloc(sizeof(pnj_t));
    sfTexture *t = NULL;
    t = sfTexture_createFromFile(texture, NULL);

    if (!pnj || !t) {
        write(2, "Error creating pnj or texture\n", 30);
        return NULL;
    }
    pnj->sprite = sfSprite_create();
    sfSprite_setTexture(pnj->sprite, t, sfFalse);
    sfSprite_setTextureRect(pnj->sprite, I_RECT(0, 0, 44, 55));
    pnj->ai = init_ai();
    pnj->clock = create_clock();
    pnj->height = 55;
    pnj->life = -1;
    pnj->speed = 1;
    pnj->txt = NULL;
    return pnj;
}

mob_t *new_mob(mob_t *new, const char *texture)
{
    new->pnj = create_pnj(texture);
    if (new->pnj == NULL) {
        free(new);
        return NULL;
    }
    new->size = (sfVector2f){0, 0};
    new->id = NULL;
    new->type = 'P';
    new->i = 0;
    new->dialog = NULL;
    new->text = NULL;
    new->view = 0;
    new->next = NULL;
    return new;
}

mob_t *create_mob(mob_t *list, const char *texture)
{
    mob_t *new = NULL;
    new = malloc(sizeof(mob_t));
    mob_t *tmp = list;

    if (!new)
        return list;
    (!texture) ? texture = SUIT_GUY_1 : 0;
    new = new_mob(new, texture);
    if (!list)
        return new;
    for (; tmp->next; tmp = tmp->next);
    tmp->next = new;
    return list;
}

mob_t *init_pnj(int nb_pnj)
{
    mob_t *mob = NULL;
    const char *texture[10] = {SUIT_GUY_1, SUIT_GUY_2, SUIT_GUY_3, SUIT_GUY_4,
    GIRL_1, GIRL_2, GIRL_3, WHITE_GUY_1, WHITE_GUY_2, WHITE_GUY_3};

    srand(random_number());
    if (nb_pnj <= 0)
        return NULL;
    for (int i = 0, nb = 0; i <= nb_pnj; i++) {
        nb = rand() % 10;
        mob = create_mob(mob, texture[nb]);
    }
    return mob;
}
