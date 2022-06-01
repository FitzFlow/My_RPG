/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-myrpg-florian.etheve
** File description:
** phone
*/

#ifndef PHONE_H_
    #define PHONE_H_
    #include "all.h"

typedef enum phone_mode {
    in_phone,
    animation,
    end_animation,
    not_in_phone
} phone_mode_t;

typedef struct phone {
    phone_mode_t phone_mode;
    entity_t *sprite;
} phone_t;

void destroy_phone(phone_t *phone);

#endif /* !PHONE_H_ */
