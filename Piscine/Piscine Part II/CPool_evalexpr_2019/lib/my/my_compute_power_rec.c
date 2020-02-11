/*
** EPITECH PROJECT, 2019
** my_compute_power_rec.c
** File description:
** calclue my_compute_power in rec
*/

#include "my.h"

int my_compute_power_rec(int nb, int p)
{
    if (p == 0)
        return (1);
    else if (p < 0)
        return (0);
    return (p > 1 ? nb * my_compute_power_rec(nb, p - 1) : nb);
}
