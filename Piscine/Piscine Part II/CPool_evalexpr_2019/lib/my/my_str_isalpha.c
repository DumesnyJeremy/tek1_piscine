/*
** EPITECH PROJECT, 2019
** my_str_isalpha
** File description:
** my_str_isalpha
*/

#include "my.h"

int my_char_isalpha(char const c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    else
        return (0);
}

int my_str_isalpha(char const *str)
{
    int i;

    if (str[0] == '\0' || str == NULL)
        return (1);
    for (i = 0; str[i] != '\0' && my_char_isalpha(str[i]) == 1; i++);
    if (str[i] == '\0')
        return (1);
    else
        return (0);
}
