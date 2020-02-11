/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** task07
*/

#include "my.h"

int my_put_nbr(int nb)
{
    long long int j = nb;

    if (j < 0) {
        my_putchar('-');
        j = j * -1;
    } if (j >= 10) {
        my_put_nbr(j / 10);
        my_put_nbr(j % 10);
    } else
        my_putchar(j + 48);
    return (0);
}
