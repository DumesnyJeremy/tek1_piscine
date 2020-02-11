/*
** EPITECH PROJECT, 2019
** infini add
** File description:
** infinite addition
*/

#include <stdlib.h>
#include "../include/my.h"

struct add_def boucle(struct add_def t)
{
    t.tempo = t.save + (t.i >= 0 ? t.nbr1[t.i] - '0': 0)
        + (t.j >= 0 ? t.nbr2[t.j] - '0': 0);
    t.res[t.k] = t.tempo % 10 + '0';
    t.res[t.k + 1] = '\0';
    t.save = t.tempo / 10;
    t.i--;
    t.j--;
    return (t);
}

char *infin_add(char *nbr1, char *nbr2)
{
    struct add_def test;
    test.i = my_strlen(nbr1) - 1;
    test.j = my_strlen(nbr2) - 1;
    test.res = malloc(sizeof(char) * (test.i + test.j) + 2);
    test.k = 0;
    test.save = 0;
    test.tempo = 0;
    test.nbr1 = nbr1;
    test.nbr2 = nbr2;
    for (; test.i >= 0 || test.j >= 0; test.k++)
    {
        test = boucle(test);
    }
    test.res[test.k] = test.save + '0';
    test.res[test.k + 1] = '\0';
    if (test.res[test.k] == '0')
        test.res[test.k] = '\0';
    my_revstr(test.res);
    return (test.res);
}