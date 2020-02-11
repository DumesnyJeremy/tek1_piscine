/*
** EPITECH PROJECT, 2019
** task02
** File description:
** lala
*/

int my_compute_factorial_rec(int nb)
{
    int resultat;
    if (nb < 0 || nb > 12)
        return 0;
    if (nb == 0)
        return 1;
    else {
        resultat = nb * my_compute_factorial_rec(nb - 1);
    }
    return resultat;
}
