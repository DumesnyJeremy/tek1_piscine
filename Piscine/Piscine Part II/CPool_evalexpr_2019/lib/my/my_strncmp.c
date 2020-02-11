/*
** EPITECH PROJECT, 2019
** sfrncmp
** File description:
** comprer char n
*/

#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i;

    if (n == 0)
        return (0);
    for (i = 0; s1[i] == s2[i] && s1[i] != '\0' && i < n; i++);
    return (s1[i] - s2[i]);
}