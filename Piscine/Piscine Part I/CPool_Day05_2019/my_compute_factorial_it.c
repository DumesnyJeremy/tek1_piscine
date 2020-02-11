/*
** EPITECH PROJECT, 2019
** Task01
** File description:
** lala
*/

int my_compute_factorial_it(int nb)

{
    int resultat = 1;
    int i = 1;

    if ( nb < 0 || nb > 12 ) {
        return 0;
    }
    for (;nb > 0 ; i++)
    {
        resultat = resultat * nb--;
    }
    return resultat;
}
