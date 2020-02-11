/*
** EPITECH PROJECT, 2019
** task04
** File description:
** lala
*/
#include <stdio.h>

int my_compute_power_rec(int nb, int p)
{
    int resultat = 1;

    if (p < 0)
        return 0;
    if (p == 0 || nb == 1)
        return 1;
    else {
        resultat = nb * my_compute_power_rec(nb, p - 1);
            }
    return resultat;
}
