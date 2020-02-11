/*
** EPITECH PROJECT, 2019
** my_strlen.c
** File description:
** count string  line
*/

#include "my.h"

int my_strlen(char const *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++);
    return (i);
}

int my_strlentab(char **tab)
{
    int i = 0;

    for (; tab[i] != NULL; i++);
    return (i);
}