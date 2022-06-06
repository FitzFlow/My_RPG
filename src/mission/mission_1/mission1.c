/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** mission1
*/

#include "rpg.h"

static int interaction(all_t *all, npc_t *john, mission_enum_t mission, int i)
{
    if (KEY_RELEASE && KEY(sfKeyE) && MISSION1 == mission &&
    dist_btw_sprite(PLAYER_S, john->entity->sprite) <= DIST_INTERACTION &&
    john->i == i) {
        return 1;
    }
    return 0;
}

void end_mission1(all_t *all, npc_t *john)
{
    sfVector2f pos_j = sfSprite_getPosition(john->entity->sprite);

    if (MISSION1 == end_figth) {
        // (my_arraylen(john->dialog) >= 4) ? john->i = 5 : 0;
        move_pnj(all, john, v2f(0, 5), 0);
        (pos_j.y == 350) ? MISSION1 = dialog : 0;
    }
    if (MISSION1 == dialog && pos_j.x == 2900)
        (interaction(all, john, dialog, 11)) ? MISSION1 = finish : 0;
    if (MISSION1 == finish)
        move_pnj(all, john, v2f(5, 0), 109);
}

void in_parc(all_t *all, npc_t *john)
{
    if ((MISSION1 == loading || MISSION1 == animation_mission) && CIRCLE_M)
        sfRenderWindow_drawCircleShape(WINDOW, CIRCLE_M, NULL);
    if (MISSION1 == loading && is_on_circle(PLAYER_S, CIRCLE_M)) {
        MISSION1 = start;
        FIGHT->fight1 = in_fight;
    }
    if (MISSION1 == start) {
        if (FIGHT->fight_result.player_win == true) {
            MISSION1 = end_figth;
            sfSprite_setPosition(john->entity->sprite, v2f(2900, 100));
            FIGHT->fight1 = not_in_fight;
            FIGHT->ennemy.pv = 100;
            all->player->pv = 100;
            FIGHT->fight_result.player_loose = false;
            FIGHT->fight_result.player_win = false;
            sfCircleShape_setPosition(CIRCLE_M, v2f(-100, -100));
        }
    }
}

static void my_mission_animation(all_t *all, npc_t *john)
{
    sfVector2f dest = {0, 0};

    if (MISSION1 == animation_mission)
        dest = sfCircleShape_getPosition(CIRCLE_M);
    if (interaction(all, john, m_none, 4) || MISSION1 == animation_mission)
        MISSION1 = animation_mission;
    if (MISSION1 == animation_mission &&
    !animation_camera(150, all->view_player1, dest, v2f(2.5, -2.5))) {
        sfView_setCenter(all->view_player1, GET_POS_S(PLAYER_S));
        MISSION1 = loading;
    }
}

void mission_1(all_t *all, npc_t *john)
{
    if (!john || !john->entity || !john->entity->sprite || MISSION2 != m_none)
        return;
    draw_my_npc(all, john);
    my_mission_animation(all, john);
    if (MISSION1 == animation_mission)
        move_pnj(all, john, v2f(5, 0), 109);
    in_parc(all, john);
    end_mission1(all, john);
}
