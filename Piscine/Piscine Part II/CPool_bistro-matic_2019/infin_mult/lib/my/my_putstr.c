/*
** EPITECH PROJECT, 2019
** task02
** File description:
** lala
*/

#include "my.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        my_putchar(str[i]);
        i++;
    }
}
