/*
** EPITECH PROJECT, 2021
** B-CPE-100-RUN-1-1-cpoolday07-idriss.said
** File description:
** my
*/
#ifndef MY_PRINTF_H_
    #define MY_PRINTF_H_
    #include <stdarg.h>
    #include <stdio.h>
    #include "my.h"

typedef struct put_s {
    char *flag;
    void (*put)(va_list, int *);
} put_t;

typedef struct put_base_s {
    char *flags;
    char *base;
    void (*put_base)(va_list, char *, int *);
} put_base_t;

typedef struct stack_s {
    char data;
    struct stack_s *next;
} my_stack_t;

int is_flags(char *flag);

int my_printf(char *str, ...);

int error_case(char *str);

int error_case_modulo(char *str);
int display_modulo(char *str, int *i);

void my_display_flag(char *flags, va_list ap, int *format);

int my_unsigned_lennb(unsigned int nb);

char *list_to_str(my_stack_t *res, int len);

char *my_unsigned_nbr_to_string(unsigned int nb);
int my_unsigned_lennb(unsigned int nb);

char *my_convert_base(long int nbr, char *bases);

void free_list(my_stack_t *stack);

void my_putstr_printf(va_list ap, int *format);
void my_putchar_printf(va_list ap, int *format);
void my_put_nbr_printf(va_list ap, int *format);
void my_putfloat_printf(va_list ap, int *format);
void my_put_long_printf(va_list ap, int *format);
void my_put_base_printf(va_list ap, char *base, int *format);
void my_put_no_printable_char_printf(va_list ap, int *format);
void my_put_unsigned_int_printf(va_list ap, int *format);

#endif /* !MY_PRINTF_H_ */
