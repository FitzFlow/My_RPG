/*
** EPITECH PROJECT, 2022
** My_RPG
** File description:
** init_dialog
*/
#include "entity.h"
#include "define.h"
#include "my.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *get_name(char **cfg)
{
    if (!cfg)
        return NULL;
    for (int i = 0; cfg[i]; i++)
        if (!strncmp(cfg[i], "Name:", 5) && cfg[i + 1])
            return my_strdup(cfg[i + 1]);
    return NULL;
}

char ***get_dialog(char **cfg)
{
    int i = 0;
    char ***dialog = NULL;
    char **array = NULL;

    for (; strncmp(cfg[i], "Text:", 5); i++);
    if (!cfg[i] || !cfg[i + 1])
        return NULL;
    i++;
    for (; cfg[i] && strcmp(cfg[i], "end"); i++) {
        array = my_str_to_word_array(cfg[i], '\\');
        dialog = add_tab(dialog, array);
    }
    return dialog;
}

char **get_mission(char **cfg)
{
    int i = 0;

    for (; cfg[i]; i++)
        if (!strncmp(cfg[i], "Mission:", 9))
            return my_str_to_word_array(my_strdup(cfg[i + 1]), '|');
    return NULL;
}

char *get_texture(char **cfg)
{
    int i = 0;

    for (; cfg[i]; i++)
        if (!strncmp(cfg[i], "Texture:", 9))
            return cfg[i + 1];
    return NULL;
}

sfVector2f get_vector(char **cfg, char *target)
{
    sfVector2f new = {0, 0};

    for (int i = 0, o = 0; cfg[i]; i++)
        if (!strncmp(cfg[i], target, strlen(target)) && cfg[i + 1]) {
            new.x = atoi(cfg[i + 1]);
            for (o = 0; cfg[i + 1][o] && cfg[i + 1][o] != ' '; o++);
            new.y = atoi(&cfg[i + 1][o]);
            return new;
        }
    return v2f(-100, -100);
}

sfIntRect get_rect_cfg(char **cfg, char *target)
{
    int i = 0;
    sfIntRect rect = {0, 0, 0, 0};
    char **rect_cfg = NULL;

    for (; cfg[i]; i++)
        if (!strncmp(cfg[i], target, strlen(target))) {
            rect_cfg = my_str_to_word_array(cfg[i + 1], ' ');
            if (my_arraylen(rect_cfg) != 4)
                return rect;
            rect.top = atoi(rect_cfg[0]);
            rect.left = atoi(rect_cfg[1]);
            rect.height = atoi(rect_cfg[2]);
            rect.width = atoi(rect_cfg[3]);
            free_array(rect_cfg);
            return rect;
        }
    return rect;
}

npc_t *create_npc(char *cfg_file)
{
    npc_t *new = NULL;
    char *buffer = my_load_file(cfg_file);
    char **cfg = my_str_to_word_array(buffer, '\n');
    sfVector2f pos = {0, 0};
    sfIntRect rect = {0, 0, 0, 0};

    if (!cfg_file || !buffer || !cfg) return NULL;
    new = malloc(sizeof(npc_t));
    new->dialog = get_dialog(cfg);
    new->id = get_name(cfg);
    new->mission = get_mission(cfg);
    new->text = NULL;
    new->i = 0;
    pos = get_vector(cfg, "Pos:");
    rect = get_rect_cfg(cfg, "Rect:");
    new->entity = init_entity(get_texture(cfg), &pos, &rect);
    free_array(cfg);
    free(buffer);
    return new;
}

npc_t **init_npc(char *cfg_folder)
{
    npc_t **list = NULL;
    char **all_cfg_file = get_file_in_folder(cfg_folder);
    int nb_npc = my_arraylen(all_cfg_file);

    if (!nb_npc) {
        perror("no npc loaded\n");
        free_array(all_cfg_file);
        return NULL;
    }
    list = malloc(sizeof(npc_t *) * (nb_npc + 1));
    for (int i = 0; all_cfg_file[i]; i++)
        list[i] = create_npc(all_cfg_file[i]);
    list[nb_npc] = NULL;
    free_array(all_cfg_file);
    return list;
}

