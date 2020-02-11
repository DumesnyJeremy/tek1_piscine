/*
** EPITECH PROJECT, 2019
** main
** File description:
** infinadd
*/

#include <my.h>
#include <evalexpr.h>

int main(int ac, char **av)
{
    if (ac == 2) {
        my_put_nbr(eval_expr(av[1]));
        write(1, "\n", 1);
    }
    return (0);
}
