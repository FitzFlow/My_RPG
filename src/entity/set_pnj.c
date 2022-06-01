/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** set_pnj
*/
#include "rpg.h"

void set_text(mob_t *mob, char **dialog, char *id)
{
    sfFont *font = sfFont_createFromFile("./assets/arial.ttf");
    int len = my_arraylen(dialog);

    if (!font || !dialog) {
        my_perror("Error Load Font Or Error Set Dialog\n");
        mob->text = NULL;
        return;
    }
    mob->text = malloc(sizeof(sfText *) * (len + 1));
    for (int i = 0; dialog[i]; i++)
        mob->text[i] = create_text(dialog[i], 15, font, sfWhite);
    mob->text[len] = NULL;
    if (!id)
        return;
    mob->id_txt = create_text(id, 15, font, sfBlack);
}

char **my_get_dialog(dialog_t *dialog, char *id)
{
    for (dialog_t *tmp = dialog; tmp; tmp = tmp->next)
        if (!my_strcmp(tmp->id, id))
            return tmp->dialog;
    return NULL;
}

void set_dialog(mob_t *npc, dialog_t *dialog)
{
    char *id[] = {"John WAIT", "Big SMOKE", "Freeze CORLEONE", NULL};
    char *path[] = {"assets/npc/john_wait.png", "assets/npc/didier.png",
    "assets/npc/freeze.png", NULL};
    sfVector2f spawn[] = {V2F(2010, 1140), V2F(1950, 2650), V2F(855, 1960)};
    int i = 0;

    for (mob_t *mob = npc; mob; mob = mob->next) {
        if (id[i]) {
            mob->id = my_strdup(id[i]);
            mob->id_txt = NULL;
            (i < 3) ? sfSprite_setPosition(mob->pnj->sprite, spawn[i]) :
            sfSprite_setPosition(mob->pnj->sprite, spawn[0]);
            sfSprite_setTexture(mob->pnj->sprite,
            sfTexture_createFromFile(path[i], sfFalse), sfFalse);
            sfSprite_setTextureRect(mob->pnj->sprite, I_RECT(0, 55, 62, 55));
            mob->dialog = my_get_dialog(dialog, mob->id);
            (mob->dialog && mob) ? set_text(mob, mob->dialog, mob->id) : 0;
            i++;
        }
    }
}

void init_pnj_and_npc(all_t *all, dialog_t *dialog)
{
    all->pnj = init_pnj(0);
    all->npc = init_pnj(5);
    all->player->mob_around = NULL;
    all->player->old_position = sfSprite_getPosition(all->player->sprite);
    spawn_pnj(all);
    set_dialog(all->npc, dialog);
}
