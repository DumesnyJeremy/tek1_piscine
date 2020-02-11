/*
** EPITECH PROJECT, 2019
** my lib
** File description:
** #include fonction name
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#pragma once

void free_strtab(char **ptr);
#define IS_PNS(c) (c == '+' || c == '-')
#define IS_NUM(c) (c >= '0' && c <= '9')
int check_negative(char const *str);
int count_cat_bistor(char const *str);
char *my_getnbr_to_str2(char const *str, int *n);
char **word_to_arrya_bi(char const *str);
int my_char_isalpha(char const c);
char *my_strndup(char const *str, int size);
struct info_param *my_params_to_array(int ac, char **av);
int my_show_param_array(struct info_param const *par);
char **my_str_to_word_array(char const *str);
void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
char *my_strdup(char const *src);
void my_swap(int *a, int *b);
void my_swap_str(char **a, char **b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr_to_int(char const *str);
char *my_getnbr_to_str(char const *str);
int my_show_word_array(char * const *top);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
char *concat_params(int ac, char **av);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_strlentab(char **tab);
int my_char_isalpha(char const c);
int my_char_isnum(char const c);
int my_char_isnumabs(char const c);
int my_char_isprintable(char const c);
int my_char_isalphanumeric(char const c);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_str_isalphanumeric(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
