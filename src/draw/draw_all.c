/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** draw_all
*/

#include "rpg.h"

void draw_mission(all_t *all)
{
    mission_1(all, get_pnj_in_the_list(all->npc, "John WAIT"));
    mission_2(all, get_pnj_in_the_list(all->npc, "John WAIT"));
    mission_3(all, get_pnj_in_the_list(all->npc, "Big SMOKE"));
    mission_4(all, get_pnj_in_the_list(all->npc, "Freeze CORLEONE"));
}

void draw_game(all_t *all)
{
    if (STATE_OF_GAME != game)
        return;
    if (FIGHT->fight1 != in_fight) {
    draw_sprite(WINDOW, all->game->map1->sprite, NULL);
    draw_map_behind(all);
    draw_pnj_behind(all);
    draw_mission(all);
    if (all->change_draw == 0)
        draw_sprite(WINDOW, all->player->sprite, NULL);
    draw_car(all);
    draw_map_in_front_of(all);
    draw_pnj_front(all);
    if (all->change_draw == 1)
        draw_sprite(WINDOW, all->player->sprite, NULL);
    draw_interaction_player_house(all);
    } else {
        draw_mission(all);
        draw_fight_sprite(all);
    }
}

void draw_game_and_house(all_t *all)
{
    if (all->interior_enum == in_city)
        draw_game(all);
    draw_interior_house(all);
}

void draw_mini_map(all_t *all)
{
    if (FIGHT->fight1 == in_fight || MISSION1 == animation_mission)
        return;
    sfVector2f center = sfView_getCenter(all->view_player1);

    center = v2f(center.x - 285, center.y + 87.5);
    sfSprite_setPosition(all->game->mini_map->sprite, center);
    if (NOT_IN_PAUSE && all->interior_enum == in_city) {
        draw_sprite(WINDOW, all->game->mini_map->sprite, NULL);
        sfView_setViewport(all->view_game,
        F_RECT(0.017f, 0.67f, 0.3f, 0.3f));
        sfRenderWindow_setView(WINDOW, all->view_game);
        draw_game_and_house(all);
    }
}

void draw_all(all_t *all)
{
    draw_main_menu(all);
    if (all->view_player1 && all->state_of_game == game) {
        if (FIGHT->fight1 == not_in_fight) {
            sfView_setViewport(all->view_player1, F_RECT(0.f, 0.f, 1.f, 1.f));
            sfRenderWindow_setView(WINDOW, all->view_player1);
        }
        draw_game_and_house(all);
        if (all->mission->mission4 == start) {
            draw_lean_bottle(all);
            // get_lean_bottle(all);
        }
        if (MISSION1 != animation_mission && FIGHT->fight1 == not_in_fight) {
            draw_phone(all);
            draw_pause(all);
        }
        draw_mini_map(all);
        drax_text_fight(all);
    }
}
