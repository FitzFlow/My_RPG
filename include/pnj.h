/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** pnj
*/

#ifndef PNJ_H_
    #define PNJ_H_
    #include "dialog.h"

typedef struct clock {
    sfClock *clock;
    sfTime time;
    float seconds;
} my_clock_t;

typedef struct ai {
    char **pattern;
} ai_t;

typedef struct pnj {
    sfSprite *sprite;
    sfVector2f pos;
    my_clock_t *clock;
    sfText *txt;
    int speed;
    int life;
    int height;
    ai_t *ai;
} pnj_t;

typedef struct mob
{
    char *id;
    sfText *id_txt;
    char type;
    pnj_t *pnj;
    sfVector2f size;
    struct mob *next;
    char **dialog;
    sfText **text;
    int view;
    int i;
} mob_t;

mob_t *init_pnj(int nb_pnj);
my_clock_t *create_clock(void);

void add_dialog_npc(dialog_t **src, dialog_t *pt, dialog_t **dest);

void move_to_another_list(mob_t **src, mob_t *pt, mob_t **dest);

int dist_btw_sprite(sfSprite *sprite1, sfSprite *sprite2);
int dist_btw_sprite_and_point(sfSprite *e1, sfVector2f pos);

mob_t *get_pnj_in_the_list(mob_t *list, char *target);

#endif /* !PNJ_H_ */
