/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** mission2
*/

#include "rpg.h"

static int interaction(all_t *all, npc_t *john, mission_enum_t mission, int i)
{
    if (KEY_RELEASE && KEY(sfKeyE) && MISSION2 == mission &&
    dist_btw_sprite(PLAYER_S, john->entity->sprite) <= DIST_INTERACTION &&
    john->i == i) {
        return 1;
    }
    return 0;
}

void start_mission2(all_t *all, npc_t *john)
{
    if (MISSION == finish && all->interior_enum == player_house)
        all->in_player_house = true;
    if (MISSION == finish && all->interior_enum == in_city &&
    all->in_player_house == true) {
        // if (MISSION2 == m_none)
        //     (my_arraylen(john->dialog) >= 13) ? john->i = 13 : 0;
        sfSprite_setPosition(john->entity->sprite, v2f(2135, 800));
        MISSION2 = loading;
    }
    if (MISSION2 == loading && interaction(all, john, loading, 16))
        MISSION2 = start;
    if (MISSION2 == start) {
        move_pnj(all, john, v2f(-5, 0), 109);
        sfCircleShape_setPosition(CIRCLE_M, v2f(977, 425));
        sfRenderWindow_drawCircleShape(WINDOW, CIRCLE_M,
        NULL);
        all->in_player_house = false;
    }
}

void combat_mission2(all_t *all, npc_t *john)
{
    if (FIGHT->fight_result.player_win == true && MISSION2 == loading) {
        MISSION2 = end_figth;
        // (my_arraylen(john->dialog) >= 17) ? john->i = 17 : 0;
    }
    if (MISSION2 == end_figth) {
        sfSprite_setPosition(john->entity->sprite, v2f(1350, 610));
        MISSION2 = dialog;
    }
}

void dialog_end_mission2(all_t *all, npc_t *john)
{
    sfVector2f pos_j = sfSprite_getPosition(john->entity->sprite);

    if (MISSION2 == dialog && pos_j.x >= 980)
        move_pnj(all, john, v2f(-5, 0), 54);
    if (MISSION2 == dialog && interaction(all, john, dialog, 23))
        MISSION2 = finish;
    if (MISSION2 == finish)
        move_pnj(all, john, v2f(5, 0), 109);
}

void mission_2(all_t *all, npc_t *john)
{
    if (!john || !john->entity || !john->entity->sprite || MISSION != finish ||
    MISSION3 != m_none)
        return;
    start_mission2(all, john);
    if (is_on_circle(PLAYER_S, CIRCLE_M) && MISSION2 == start) {
        FIGHT->fight1 = in_fight;
        MISSION2 = loading;
    }
    combat_mission2(all, john);
    dialog_end_mission2(all, john);
}
