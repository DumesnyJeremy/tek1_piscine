/*
** EPITECH PROJECT, 2019
** my_str_islphanumeric
** File description:
** check str and char is num or alpha
*/

#include <my.h>

int my_char_isalphanumeric(char const c)
{
    if ((c >= 'a' &&  c <= 'z') || (c >= 'A' && c <= 'Z')
    || (c >= '0' &&  c <= '9'))
        return (1);
    else
        return (0);
}

int my_str_isalphanumeric(char const *str)
{
    int i;

    if (str[0] == '\0')
        return (1);
    for (i = 0; str[i] != '\0' && my_char_isalphanumeric(str[i]) == 0; i++);
    if (str[i] == '\0')
        return (1);
    else
        return (0);
}
