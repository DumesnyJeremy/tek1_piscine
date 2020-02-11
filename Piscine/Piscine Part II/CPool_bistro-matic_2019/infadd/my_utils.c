/*
** EPITECH PROJECT, 2019
** Utils
** File description:
** Lib functions
*/

#include "lib.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i++]);
    }
    return (0);
}

int my_strlen(char const *str)
{
    int i = 0;
    for (; *str; i++, str++);
    return (i);
}

int my_strcmp(char const *s1, char const *s2)
{
    int i = my_strlen(s1);
    int j = my_strlen(s2);
    int k = 0;
    if (i > j)
        return (1);
    if (i < j)
        return (-1);
    if (i == j)
        for (k; s1[k] == s2[k] && s1[k] != '\0'; k++);
    return (s1[k] - s2[k]);
}

void my_swap_sub(char **a, char **b)
{
    char *tmp = *a;
    *a = *b;
    *b = tmp;
}
