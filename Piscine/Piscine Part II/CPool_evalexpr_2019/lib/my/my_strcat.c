/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** cat strings
*/

#include "my.h"

char *my_strcat(char *dest, char const *str)
{
    int j;
    int i;

    for (j = 0; dest[j] != '\0'; j++);
    for (i = 0; str[i] != '\0'; i++, j++)
        dest[j] = str[i];
    dest[j] = '\0';
    return (dest);
}
