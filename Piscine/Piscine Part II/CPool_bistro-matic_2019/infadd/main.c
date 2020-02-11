/*
** EPITECH PROJECT, 2019
** infadd
** File description:
** main
*/

#include "lib.h"

int main(int ac, char **av)
{
    char *str;
    int swap = 0;
    if (ac != 3) {
        write (2, "error", 6);
        return (84);
    }
    if ((av[1][0] == '-' && av[2][0] != '-')
        || (av[1][0] != '-' && av[2][0] == '-')) {
        str = sub(av[1], av[2], swap);
        my_putstr(str);
    }
    else {
        str = add(av[1], av[2]);
        my_putstr(str);
    }
    free(str);
    return (0);
}
