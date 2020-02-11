/*
** EPITECH PROJECT, 2019
** my_putstr.c
** File description:
** write string
*/

#include "my.h"

int my_putstr(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    write(1, str, i);
}
