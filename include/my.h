/*
** EPITECH PROJECT, 2021
** B-CPE-100-RUN-1-1-cpoolday07-idriss.said
** File description:
** my
*/
#ifndef LIBMY_H_
    #define LIBMY_H_
    #include <stdio.h>
    #include <string.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <stddef.h>
    #include <stdbool.h>

typedef struct my_getnbr_base_s {
    char data;
    struct my_getnbr_base_s *next;
} my_getnbr_base_t;

int my_sort_int_array(int *array, int size);
int my_sort_word_array(char **tab);

char *get_elm_ptr(char *str, int index, char delim);

void my_swap(int *a, int *b);

char *my_strcapitalize(char *str);
char *my_strlowcase(char *str);
char *my_strupcase(char *str);

char *my_revstr(char *str);

char *my_strncpy(char *dest, char const *src, int n);
char *my_strcpy(char *dest, char const *src);

int my_strncmp(char const *s1, char const *s2, int n);
int my_strcmp(char const *s1, char const *s2);

char **my_str_to_word_array(char *str, char delim);

char **my_array_cat(char **a1, char **a2);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int n);

int my_str_in_str(char *str, char *to_find);
char *my_strstr(char *str, char const *to_find);

char *my_strndup(char *str, int len);
char *my_nstrdup(char *str, int n);
char **my_arraydup(char **array);
char *my_strdup(char *str);

long int my_getnbr_base(long int nb, char *base);
char *my_nbr_to_string(int nb);
int my_getnbr(char const *str);

int my_find_prime_sup(int nb);
int my_is_prime(int nb);

int my_compute_square_root(int nb);
int my_compute_power_rec(int nb, int power);
int my_compute_power_it(int nb, int power);
int my_compute_factorial_it(int nb);
int my_compute_factorial_rec(int nb);

int my_strlen_split(char *str, char split);
int my_strlen_without(char *str, char c);
int my_len_line(char *str, int l);
int my_strlen_alpha(char *str);
int my_strlen(char const *str);
int my_arraylen(char **array);
int my_strlen_num(char *str);
int my_lennb(int nb);

int nb_word(char *str, char delim);

int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int is_printable(char c);

int my_str_islower(char const *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_alphanum(char *str);

int my_str_is_neg(char const *str);
int my_isneg(int nb);

int my_str_is_number(char *str);
int is_alphanum(char c);
int is_alpha(char c);
int is_num(char c);

void my_putnbr_base(long int nb, char *base);
void my_putstr(char const *str);
void my_putarray(char **array);
void my_put_nbr(long int nb);
void my_perror(char *str);
void my_putchar(char c);

int nb_char(char *str, char c);

int is_bigger(char *str1, char *str2);
int my_bigger_nb(int nb1, int nb2);

void my_replace_char(char *str, char target, char c);

char *my_getline(char *str);
char *my_load_file(char *pathfile);
char **my_load_2d_file(char *pathfile);

void free_array(char **array);

char **replace_line_in_array(char **array, char *str, int index);
int index_of_line_in_array(char **array, char *target);
char **delete_line_in_array(char **array, int index);
char *ptr_line_in_array(char **array, char *target);
char **add_line_in_array(char **src, char *str);

void nothing(void);

char *my_clean_str(char *str, char c);
char *rm_char_in_str(char *str, char c);
char *rm_tab_in_str(char *str);
void print_tab_char(char **tab);

//à reparer
int my_showstr(char *str);
int my_showmem(char const *str, int size);
#endif /* !LIBMY_H_ */
