/*
** EPITECH PROJECT, 2019
** my_str_isnum
** File description:
** my_str_isnum
*/

#include "my.h"

int my_char_isnum(char const c)
{
    if (c >= '0' && c <= '9')
        return (1);
    else
        return (0);
}

int my_str_isnum(char const *str)
{
    int i;

    if (str[0] == '\0' || str == NULL)
        return (1);
    for (i = 0; str[i] != '\0' && my_char_isnum(str[i]) == 1; i++);
    if (str[i] == '\0')
        return (1);
    else
        return (0);
}
