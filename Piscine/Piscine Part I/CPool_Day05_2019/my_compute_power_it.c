/*
** EPITECH PROJECT, 2019
** task03
** File description:
** lala
*/

int my_compute_power_it(int nb, int p)
{
    int resultat = nb;
    int i = 1;

    if (p < 0)
        return 0;

    if (p == 0 || nb == 1)
        return 1;

    while (i != p)
    {
        resultat = resultat * nb;
        i++;
    }
    return resultat;
}
