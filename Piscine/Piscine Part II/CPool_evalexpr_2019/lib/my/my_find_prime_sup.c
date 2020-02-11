/*
** EPITECH PROJECT, 2019
** my_find_prime_sup
** File description:
** my_find_prime_sup
*/

#include "my.h"

int my_is_primey(int nb)
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

int my_find_prime_sup(int nb)
{
    if (nb < 0)
        nb = 0;
    if (my_is_primey(nb) == 1)
        return (nb);
    else
        for (; my_is_primey(nb) != 1; nb++);
    return (nb);
}
