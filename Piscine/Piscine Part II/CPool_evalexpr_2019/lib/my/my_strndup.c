/*
** EPITECH PROJECT, 2019
** bisto
** File description:
** bisto
*/

#include "my.h"

char *my_strndup(char const *str, int size)
{
    char *cpy = malloc(sizeof(char) * (size + 1));

    if (str == NULL)
        return (NULL);
    cpy = my_strncpy(cpy, str, size);
    return (cpy);
}