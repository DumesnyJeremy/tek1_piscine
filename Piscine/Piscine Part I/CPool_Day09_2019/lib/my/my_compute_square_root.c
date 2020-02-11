/*
** EPITECH PROJECT, 2019
** task05
** File description:
** lala
*/

int my_compute_square_root(int nb)
{
    int i = 2;
    if (nb == 1)
        return (1);
    while ((i * i) < nb)
        i++;
    if ( i * i == nb )
        return (i);
    else
        return (0);
}
