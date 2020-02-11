/*
** EPITECH PROJECT, 2019
** my_compute_square_root
** File description:
** compute square root
*/

#include "my.h"

int my_compute_square_root(int nb)
{
    int j = 0;
    int i;

    if (nb < 0)
        return (0);
    for (i = 1; j < nb; i++)
        j = i * i;
    return (j == nb ? i - 1 : 0);
}
