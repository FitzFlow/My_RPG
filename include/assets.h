/*
** EPITECH PROJECT, 2022
** Dev---Rpg
** File description:
** assets
*/

#ifndef ASSETS_H_
    #define ASSETS_H_
    #include "all.h"

    typedef struct lean_bottle {
        sfSprite *sprite;
        sfTexture *texture;
        sfVector2f position;
        sfVector2f size;
        bool taked;
    } lean_bottle_t;

    lean_bottle_t *init_bottle_of_lean(const int *pos);

    lean_bottle_t **array_of_lean(const int number, int lean_coord[4][2]);

#endif /* !ASSETS_H_ */
