/*
** EPITECH PROJECT, 2019
** my_strncat
** File description:
** my_strncat
*/

#include "my.h"

char *my_strncat(char *dest, char const *str, int n)
{
    int j;
    int i;

    for (j = 0; dest[j] != '\0'; j++);
    for (i = 0; str[i] != '\0' && i < n; i++, j++)
        dest[j] = str[i];
    dest[j] = '\0';
    return (dest);
}
