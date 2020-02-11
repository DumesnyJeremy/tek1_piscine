/*
** EPITECH PROJECT, 2019
** my_is_prime
** File description:
** my_is_prime
*/

#include "my.h"

int my_is_prime(int nb)
{
    int a = 0;

    if (nb < 0)
        nb = nb * -1;
    if (nb == 1 || nb == 0)
        return (0);
    for (int i = 2; i < nb; i++)
        if (nb % i == 0)
            a = 1;
    return (a == 0 ? 1 : 0);
}
