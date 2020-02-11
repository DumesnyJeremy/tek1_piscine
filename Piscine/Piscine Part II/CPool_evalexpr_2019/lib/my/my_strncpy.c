/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** cpy n char
*/

#include "my.h"

char *my_strncpy(char *dest, char const *str, int n)
{
    int i;

    if (str == NULL)
        return (NULL);
    for (i = 0; str[i] != '\0' && i < n; i++)
        dest[i] = str[i];
    for (; i < n; i++)
        dest[i] = '\0';
    dest[i] = '\0';
    return (dest);
}