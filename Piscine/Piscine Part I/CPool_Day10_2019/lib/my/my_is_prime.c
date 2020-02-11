/*
** EPITECH PROJECT, 2019
** task06
** File description:
** lalalala
*/

int my_is_prime(int nb)
{
    int i = 2;
    int resultat = 0;
    if (nb < 0)
        nb = nb * -1;
    if (nb == 0 || nb == 1)
        return 0;
    while ((nb % i != 0))
        i++;
    if (i == nb)
        return (1);
    else
        return (0);
}
