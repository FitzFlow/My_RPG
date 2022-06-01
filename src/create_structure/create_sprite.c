/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** *
*/

#include "rpg.h"

entity_t *init_entity(const char *texture, sfVector2f *position,
sfIntRect *rect)
{
    entity_t *sprite = malloc(sizeof(entity_t));
    sprite->sprite = sfSprite_create();
    sprite->texture = sfTexture_createFromFile(texture, NULL);
    sprite->size = (sfVector2f){1, 1};
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setScale(sprite->sprite, sprite->size);
    if (position == NULL) {
        sprite->position = (sfVector2f){0, 0};
        sfSprite_setPosition(sprite->sprite, sprite->position);
    } else
        sfSprite_setPosition(sprite->sprite, *position);
    if (rect != NULL) {
        sprite->rect = *rect;
        sfSprite_setTextureRect(sprite->sprite, sprite->rect);
    }
    return (sprite);
}

entity_t *init_map(const char *texture, sfVector2f *position,
sfIntRect *rect)
{
    entity_t *sprite = malloc(sizeof(entity_t));
    sprite->sprite = sfSprite_create();
    sprite->texture = sfTexture_createFromFile(texture, NULL);
    sprite->size = (sfVector2f){1, 1};
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setScale(sprite->sprite, sprite->size);
    if (position == NULL) {
        sprite->position = (sfVector2f){0, 0};
        sfSprite_setPosition(sprite->sprite, sprite->position);
    } else
        sfSprite_setPosition(sprite->sprite, *position);
    if (rect != NULL) {
        sprite->rect = *rect;
        sfSprite_setTextureRect(sprite->sprite, sprite->rect);
    }
    return (sprite);
}
