/*
** EPITECH PROJECT, 2019
** my_strdup
** File description:
** my_strdup
*/

#include "my.h"

char *my_strdup(char const *src)
{
    int nb_len = my_strlen(src) + 1;
    char *cpy = malloc(sizeof(char) * (nb_len));

    if (cpy == NULL)
        return (NULL);
    cpy = my_strcpy(cpy, src);
    return (cpy);
}
