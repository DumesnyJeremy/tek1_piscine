/*
** EPITECH PROJECT, 2019
** my_putnbr_base
** File description:
** Converts and displays a decimal num into a given base
*/

#include "lib.h"

int first_check(char const *base, int len)
{
    int x = 0;
    if (len < 2)
        return (0);
    for (; base[x] != '\0'; x++) {
        if (base[x] > 126 || base[x] < 32)
            return (0);
        for (int y = 0; y != x; y++)
            if (base[y] == base[x])
                return (0);
    }
    return (1);
}

int my_putnbr_base(int nbr, char const *base)
{
    int len = 0;
    for (; base[len]; len++);
    if (first_check(base, len)) {
        if (nbr < 0) {
            my_putchar('-');
            nbr = nbr * -1;
        }
        if (nbr >= len)
            my_putnbr_base(nbr / len, base);
        if (nbr % len < 10)
            my_putchar(nbr % len + '0');
        else my_putchar((nbr % len) + 55);
    }
    return (0);
}
