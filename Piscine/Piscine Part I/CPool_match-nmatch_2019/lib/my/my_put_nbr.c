/*
** EPITECH PROJECT, 2019
** put nbr
** File description:
** oui
*/

int my_put_nbr(int nb)
{
    int a;

    for (; nb < 0;)
    {
        write(1, '-', 1);
        nb = nb * (-1);
    }
    if (nb >= 0)
    {
        if (nb >= 10)
        {
            a = (nb % 10);
            nb = (nb - a) / 10;
            my_put_nbr(nb);
            my_putchar( 48 + nb );
        }
        else
            write(1, 48 + nb % 10);
    }
}
