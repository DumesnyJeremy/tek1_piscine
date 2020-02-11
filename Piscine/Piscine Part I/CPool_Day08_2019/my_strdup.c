/*
** EPITECH PROJECT, 2019
** task01
** File description:
** oui
*/

#include <stdlib.h>

char *my_strdup(char const *src)
{
    int i;
    int j;
    char *str;

    j = 0;
    while (src[j])
        j++;
    str = (char*)malloc(sizeof(*str) * (j + 1));
    i = 0;
    while (i < j) {
        str[i] = src[i];
        i++;
    }
    return (str);
}
