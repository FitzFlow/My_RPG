/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** define
*/

#ifndef DEFINE_H_
    #define DEFINE_H_
//-----------------------Define for main menu----------------------------------

    #define CADRE "assets/main_menu/cadre.png"
    #define SKY "assets/main_menu/sky.png"
    #define MAP "assets/game_map/map.png"
    #define ROAD "assets/main_menu/road.png"

    #define CREATOR_T "assets/main_menu/creator.png"
    #define CLOUD_T "assets/main_menu/cloud.png"
    #define CITY1_T "assets/main_menu/city1.png"
    #define CITY2_T "assets/main_menu/city2.png"
    #define CITY3_T "assets/main_menu/city3.png"
    #define CITY4_T "assets/main_menu/city4.png"

    #define CREATOR_S all->menu->creator->sprite
    #define CLOUD_S all->menu->cloud->sprite
    #define CITY1_S all->menu->city1->sprite
    #define CITY2_S all->menu->city2->sprite
    #define CITY3_S all->menu->city3->sprite
    #define CITY4_S all->menu->city4->sprite

    #define CREATOR all->menu->creator
    #define CLOUD all->menu->cloud
    #define CITY1 all->menu->city1
    #define CITY2 all->menu->city2
    #define CITY3 all->menu->city3
    #define CITY4 all->menu->city4

    /* BUTTON */
    #define CONTINUE_BTN_T "assets/main_menu/continue_button.png"
    #define NEW_GAME_BTN_T "assets/main_menu/new_game_button.png"
    #define QUIT_BTN_T "assets/main_menu/quit.png"
    #define BACK_BTN_T "assets/main_menu/back_button.png"
    #define CONTINUE_BTN all->menu_btn->continue_btn
    #define NEW_GAME_BTN all->menu_btn->new_game_btn
    #define QUIT_BTN all->menu_btn->quit_button
    #define BACK_BTN all->menu_btn->back_button

    #define KEY_BTN "assets/main_menu/tuto_btn.png"
    #define KEY_INTERFACE "assets/main_menu/key.png"
    #define MENU_MUSIC "assets/main_menu/menu_music.ogg"
    #define CHARACTER_MENU "assets/main_menu/player_selection.png"

//-----------------------Define for Player ------------------------------------

    #define PLAYER_CHOICE_BOY all->select_player->player_choice_boy
    #define PLAYER_BOY "assets/character/main_character.png"
    #define PLAYER_BOY_BLUE "assets/character/main_character_blue.png"
    #define PLAYER_BOY_PINK "assets/character/main_character_blue.png"
    #define PLAYER_BOY_RED "assets/character/main_character_red.png"
    #define PLAYER_BOY_SELECTION_T "assets/main_menu/player_btn.png"

    #define PLAYER_CHOICE_GIRL all->select_player->player_choice_girl
    #define PLAYER_GIRL_SELECTION_T "assets/main_menu/player_girl_btn.png"
    #define PLAYER_GIRL "assets/character/perso_principale_fille.png"
    #define PLAYER_GIRL_BLUE "assets/character/perso_principale_fille_blue.png"
    #define GIRL_DBLUE "assets/character/perso_principale_fille_dark_blue.png"
    #define PLAYER_GIRL_RED "assets/character/perso_principale_fille_red.png"

//-----------------------Define for NPC ---------------------------------------

    #define SUIT_GUY_1 "assets/npc/suit_guy_1.png"
    #define SUIT_GUY_2 "assets/npc/suit_guy_2.png"
    #define SUIT_GUY_3 "assets/npc/suit_guy_3.png"
    #define SUIT_GUY_4 "assets/npc/suit_guy_4.png"
    #define GIRL_1 "assets/npc/ncp_girl_1.png"
    #define GIRL_2 "assets/npc/ncp_girl_2.png"
    #define GIRL_3 "assets/npc/ncp_girl_3.png"
    #define JOHN "assets/npc/john_wait.png"
    #define LUIDJI "assets/npc/luidji.png"
    #define FREEZE "assets/npc/freeze.png"
    #define DIDIER "assets/npc/didier.png"
    #define WHITE_GUY_1 "assets/npc/white_guy_1.png"
    #define WHITE_GUY_2 "assets/npc/white_guy_2.png"
    #define WHITE_GUY_3 "assets/npc/white_guy_3.png"

//-----------------------Define for CAR ---------------------------------------

    #define CAR "assets/car/car.png"
    #define CAR_R "assets/car/car_red.png"
    #define CAR_G "assets/car/car_green.png"
    #define CAR_B "assets/car/car_blue.png"
//-----------------------Define for inventory ---------------------------------

    #define PAUSE all->game->pause
    #define INVENTORY all->game->inventory

//-----------------------Define for phone -------------------------------------

    #define PHONE all->phone
    #define PHONE_MODE all->phone->phone_mode
    #define IN_PHONE all->phone->phone_mode == in_phone
    #define NOT_IN_PHONE all->phone->phone_mode == not_in_phone
    #define PHONE_ANIMATION all->phone->phone_mode == animation
    #define PHONE_END_ANIMATION all->phone->phone_mode == end_animation

//-----------------------Define for ENUM --------------------------------------

    #define IN_PAUSE all->game_pause == in_pause
    #define NOT_IN_PAUSE all->game_pause == not_in_pause

    #define STATE_OF_GAME all->state_of_game
    #define SELECT_PLAYER all->select_player->character_menu


//-----------------------Define for Window ------------------------------------

    #define WINDOW all->window->window
    #define VIEW_DEFAULT(window) sfRenderWindow_getDefaultView(window)
    #define HUD_INV "assets/game_map/inventory.png"
    #define HUD_PAUSE "assets/game_map/pause.png"
    #define MIN_MAP_BG "assets/game_map/mini_map.png"

//-----------------------Define for MAP and Background-------------------------

    #define MAP1 "assets/game_map/map1.png"
    #define MAP2 "assets/game_map/map2.png"
    #define MAP3 "assets/game_map/map3.png"
    #define MAP4 "assets/game_map/map4.png"
    #define MAP5 "assets/game_map/map5.png"
    #define MAP6 "assets/game_map/map6.png"
    #define MAP7 "assets/game_map/map7.png"

    #define COLLISION "assets/game_map/collision_filter.png"
    #define COLLISION_ROAD "assets/game_map/collision_road_filter.png"

//------------------------------Shortcuts--------------------------------------

    #define SELECT_PLAYER_G "assets/main_menu/perso.png"
    #define GET_RECT(sprite) sfSprite_getTextureRect(sprite)
    #define GET_POS_S(sprite) sfSprite_getPosition(sprite)
    #define PLAYER_S all->player->sprite

    #define TEXT pnj->text[pnj->i]
    #define ID_TEXT pnj->id_txt

    #define TOUCH(touch) sfKeyboard_isKeyPressed(touch)
    #define KEY_RELEASE all->window->event.type == sfEvtKeyReleased
    #define KEY(my_key) all->window->event.key.code == my_key

    #define ALT_F4 KEY_RELEASE && KEY(sfKeyLAlt) && KEY(sfKeyF4)

    #define CIRCLE_M all->mission->circle_mission
    #define MISSION1 all->mission->mission1
    #define MISSION2 all->mission->mission2
    #define MISSION3 all->mission->mission3
    #define MISSION4 all->mission->mission4

    #define CLICK all->window->event.type == sfEvtMouseButtonPressed
    #define CLICKR all->window->event.type == sfEvtMouseButtonReleased
    #define MOUSE(btn) all->window->event.mouseButton.button == btn
    #define LEFT sfMouseLeft

    #define FILTER all->filter->filter
    #define FILTER_ROAD all->filter->filter_road

    #define I_RECT(left, top, w, h) (sfIntRect) {left, top, w, h}
    #define F_RECT(left, top, w, h) (sfFloatRect) {left, top, w, h}
    #define GET_PIXEL(img, x, y) sfImage_getPixel(img, x, y)
    #define v2f(x, y) (sfVector2f) {x, y}

    #define PNJ_S pnj->entity->sprite
    #define PNJ_M all->pnj
    #define PNJ pnj->pnj

    #define PLAYER all->player
    #define AROUND all->player->mob_around
    #define OLD_POS all->player->old_position

    #define RENDER_D 850
    #define DIST_INTERACTION 100

    #define INTERACT_E_S interior.interact_e->sprite

    #define PLAYER_IN_PARK pos.x >= 2570 && pos.x < 3070 \
    && pos.y >= 300 && pos.y <= 620

//-----------------------Define for pause menu---------------------------------

    #define PAUSE_BTN all->menu_pause->pause_btn
    #define PAUSE_CADRE all->menu_pause->pause_cadre
    #define PAUSE_MENU all->menu_pause->pause_menu
    #define PAUSE_TXT all->menu_pause->pause_txt

    #define POS_PAUSE_MENU v2f(view.x - 320, view.y - 340)
    #define POS_PAUSE_BTN v2f(view.x - 70, view.y - 120)
    #define POS_PAUSE_TXT v2f(view.x - 66, view.y - 220)
    #define POS_PAUSE_CADRE v2f(view.x - 70, view.y - 230)

    #define POS_RES_BTN v2f(view.x - 70, view.y - 135)
    #define POS_SET_BTN v2f(view.x - 70, view.y - 25)
    #define POS_MAIN_BTN v2f(view.x - 70, view.y + 85)

    #define RESUME_BUTTON menu_pause->resume_button
    #define SETTING_BUTTON menu_pause->setting_button
    #define MENU_BUTTON menu_pause->menu_button

    #define PAUSE_MENU_T "assets/pause_menu/in_game_pause.png"
    #define PAUSE_BUTTON_T "assets/pause_menu/in_game_pause_button.png"
    #define PAUSE_TXT_T "assets/pause_menu/in_pause_txt.png"
    #define PAUSE_CADRE_T "assets/pause_menu/pause_cadre.png"
    #define RESUME_BTN "assets/pause_menu/resume_btn.png"
    #define SETTING_BTN "assets/pause_menu/main_menu_btn.png"
    #define EXIT_BTN "assets/pause_menu/settings_btn.png"

//-----------------------Define for house interior-----------------------------

    #define PLAYER_HOUSE "assets/interior/player_house.png"
    #define PLAYER_HOUSE2 "assets/interior/player_house2.png"
    #define PLAYER_HOUSE_FILTER "assets/interior/player_house_filter.png"
    #define OTHER_HOUSE "assets/interior/other_house.png"
    #define OTHER_HOUSE2 "assets/interior/other_house2.png"
    #define OTHER_HOUSE_FILTER "assets/interior/other_house_filter.png"
    #define INTERACT_E "assets/interior/interact_e.png"

    #define UP 0
    #define LT 1
    #define RT 2
    #define DN 3

//-----------------------Define for fight system-------------------------------

    #define FIGHT all->fight
    #define FBACK_BTN "assets/fight/back_button.png"
    #define DDOS_ATK "assets/fight/attack4.png"
    #define SQL_ATK "assets/fight/attack1.png"
    #define MITM_ATK "assets/fight/attack3.png"
    #define BRUTE_FORCE_ATK "assets/fight/attack5.png"
    #define RUN_FIGHT "assets/fight/attack2.png"
    #define ATTACK_BUTTON "assets/fight/attack_button.png"
    #define FIGHT_SCENE "assets/fight/fight_system.png"
    #define INFORMATION_TABLE "assets/fight/information_table.png"

//-----------------------------Define for Assets-------------------------------

    #define PHONE_T "assets/phone/phone_neutral.png"
    #define LEAN_BOTTLE "assets/mission/lean_bottle.png"

#endif
