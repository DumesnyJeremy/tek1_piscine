/*
** EPITECH PROJECT, 2019
** my_str_isupper
** File description:
** my_str_isupper
*/

#include "my.h"

int my_char_isupper(char const c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    else
        return (0);
}

int my_str_isupper(char const *str)
{
    int i;

    if (str[0] == '\0')
        return (1);
    for (i = 0; str[i] != '\0' && my_char_isupper(str[i] == 1); i++);
    if (str[i] == '\0')
        return (1);
    else
        return (0);
}
