/*
** EPITECH PROJECT, 2019
** nbr
** File description:
** oui
*/

int my_put_nbr(int n)
{
    int modulo;
    int a = 10;

    if (n > -1)
    {
        if (n < 10)
            my_putchar(48 + n % 10);
        else {
            modulo = (n % a);
            n = (n - modulo) / a;
            my_put_nbr(n);
            my_putchar(48 + modulo);
        }
    }
}
