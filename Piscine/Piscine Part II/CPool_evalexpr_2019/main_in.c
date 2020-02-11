/*
** EPITECH PROJECT, 2019
** main
** File description:
** infinadd
*/

#include <my.h>
#include <infinadd.h>

int main(int ac, char *av[])
{
    char *reslut = NULL;
    if (ac != 3)
        return (84);
    if (check_negative(av[1]) == 1 && check_negative(av[2]) == 1)
        reslut = infinadd(av[1], av[2], "0123456789", 1);
    else if (check_negative(av[1]) == 1 && check_negative(av[2]) == 0)
        reslut = infinsub(av[1], av[2], "0123456789", 1);
    else if (check_negative(av[1]) == 0 && check_negative(av[2]) == 1)
        reslut = infinsub(av[1], av[2], "0123456789", 0);
    else
        reslut = infinadd(av[1], av[2], "0123456789", 0);
    my_putstr(reslut);
    write(1, "\n", 1);
    free(reslut);
    return (0);
}