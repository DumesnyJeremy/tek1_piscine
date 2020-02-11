/*
** EPITECH PROJECT, 2019
** my_str_isprintable
** File description:
** my_str_isprintable
*/

#include <my.h>

int my_char_isprintable(char const c)
{
    if (c >= 32 && c <= 126)
        return (1);
    else
        return (0);
}

int my_str_isprintable(char const *str)
{
    int i;

    if (str[0] == '\0' || str == NULL)
        return (1);
    for (i = 0; str[i] != '\0' && my_char_isprintable(str[i]) == 1; i++);
    if (str[i] == '\0')
        return (1);
    else
        return (0);
}
