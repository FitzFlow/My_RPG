/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** entity
*/

#ifndef ENTITY_H_
    #define ENTITY_H_
    #include <SFML/Audio.h>
    #include <SFML/Graphics.h>
    #include <SFML/System.h>

typedef struct entity {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f position;
    sfVector2f size;
    sfIntRect rect;
} entity_t;

entity_t *init_entity(const char *texture, sfVector2f *pos, sfIntRect *rect);
void destroy_entity(entity_t *sprite);

void draw_sprite(sfRenderWindow *renderWindow, const sfSprite *object,
const sfRenderStates *states);

typedef struct npc {
    int i;
    char *id;
    int nb_npc;
    sfText *text;
    char **mission;
    char ***dialog;
    entity_t *entity;
} npc_t;

/*      Utilities      */
npc_t *init_dialog(char *filepath);
sfText *create_text(char *txt, int size, sfFont *font, sfColor color);


#endif /* !ENTITY_H_ */
