/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** entity
*/

#ifndef ENTITY_H_
    #define ENTITY_H_
    #include "all.h"

typedef struct entity {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f position;
    sfVector2f size;
    sfIntRect rect;
} entity_t;

entity_t *init_entity(const char *texture, sfVector2f *pos, sfIntRect *rect);
void destroy_entity(entity_t *sprite);

void destroy_mob(mob_t *mob);

void draw_sprite(sfRenderWindow *renderWindow, const sfSprite *object,
const sfRenderStates *states);

#endif /* !ENTITY_H_ */
