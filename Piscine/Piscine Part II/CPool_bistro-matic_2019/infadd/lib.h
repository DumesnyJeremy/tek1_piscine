/*
** EPITECH PROJECT, 2019
** Libmy
** File description:
** Header
*/

#ifndef LIB_H
#define LIB_H

#include <unistd.h>
#include <stdlib.h>

typedef struct op_add_s {
    int max_len;
    int save;
    int save_shift;
    int result;
    int len_a;
    int len_b;
    int sign;
    char *r;
} op_add_t;

int my_strcmp(char const *s1, char const *s2);
char *add(char *a, char *b);
int my_strlen(char const *str);
int my_putstr(char const *str);
void my_putchar(char c);
void my_swap_sub(char **a, char **b);
char *sub(char *a, char *b, int swap);

#endif
