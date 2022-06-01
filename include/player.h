/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** player
*/

#ifndef PLAYER_H_
    #define PLAYER_H_
    #include "all.h"

typedef struct player_struct {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f position;
    sfVector2f size;
    sfIntRect rect;
    unsigned int pv;
    unsigned int damage;
    unsigned int xp;
    unsigned int level;
    unsigned int speed;
    mob_t *mob_around;
    sfVector2f old_position;
} player_t;

player_t *init_player(void);

#endif /* !PLAYER_H_ */
