/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** all_struct
*/

#include "rpg.h"

void load_car(all_t *all)
{
    int car_pos_x[8] = {-200, 480, 2340, 3700, 3400, 2410, -200, -200};
    int car_pos_y[8] = {100, -200, -200, 30, 2030, 3400, 2245, 1480};
    all->car_of = tab_of_car(8, car_pos_x, car_pos_y);
    all->timer = sfClock_create();
}

void init_mission(all_t *all)
{
    all->mission = malloc(sizeof(*all->mission));
    all->mission->mission1 = m_none;
    all->mission->mission2 = m_none;
    all->mission->mission3 = m_none;
    all->mission->mission4 = m_none;
    all->mission->mission5 = mission_5_not_start;
    CIRCLE_M = create_circle(V2F(2570, 440), 15, sfYellow);
}

void resize_fight_text(all_t *all)
{
    sfText_setColor(FIGHT->fight_text.text, sfGreen);
    sfText_setColor(FIGHT->fight_text.text_pv, sfGreen);
    sfText_setColor(FIGHT->fight_text.ennemy, sfGreen);
    sfText_setColor(FIGHT->fight_text.ennemy_pv, sfGreen);
    sfText_setCharacterSize(FIGHT->fight_text.text, 10);
    sfText_setCharacterSize(FIGHT->fight_text.text_pv, 10);
    sfText_setCharacterSize(FIGHT->fight_text.ennemy, 10);
    sfText_setCharacterSize(FIGHT->fight_text.ennemy_pv, 10);
    sfText_setString(FIGHT->fight_text.text, "PV: ");
    sfText_setString(FIGHT->fight_text.text_pv,
    my_nbr_to_string(all->player->pv));
    sfText_setString(FIGHT->fight_text.ennemy, "PV: ");
    sfText_setString(FIGHT->fight_text.ennemy_pv,
    my_nbr_to_string(FIGHT->ennemy.pv));
}

void fight_text(all_t *all)
{
    FIGHT->fight_text.font = sfFont_createFromFile("assets/arial.ttf");
    FIGHT->fight_text.text = sfText_create();
    FIGHT->fight_text.text_pv = sfText_create();
    FIGHT->fight_text.ennemy = sfText_create();
    FIGHT->fight_text.ennemy_pv = sfText_create();
    sfText_setFont(FIGHT->fight_text.text_pv, FIGHT->fight_text.font);
    sfText_setFont(FIGHT->fight_text.text, FIGHT->fight_text.font);
    sfText_setFont(FIGHT->fight_text.ennemy, FIGHT->fight_text.font);
    sfText_setFont(FIGHT->fight_text.ennemy_pv, FIGHT->fight_text.font);
    sfText_setPosition(FIGHT->fight_text.text, V2F(299, 237));
    sfText_setPosition(FIGHT->fight_text.text_pv, V2F(354, 237));
    sfText_setPosition(FIGHT->fight_text.ennemy, V2F(299, 79));
    sfText_setPosition(FIGHT->fight_text.ennemy_pv, V2F(354, 79));
    resize_fight_text(all);
}

all_t *load_all_struct(void)
{
    all_t *all = malloc(sizeof(all_t));

    all->window = init_window();
    all->cadre = init_entity(CADRE, &V2F(1116, 509), NULL);
    load_menu(all);
    load_game(all);
    load_filter(all);
    all->clock_entity = sfClock_create();
    all->change_draw = 0;
    load_pause_menu(all);
    STATE_OF_GAME = main_menu;
    load_interior(all);
    init_mission(all);
    PHONE_MODE = not_in_phone;
    load_all_pt2(all);
    return (all);
}