/*
** EPITECH PROJECT, 2019
** task01
** File description:
** print_alpha
*/

int my_print_revalpha(void)
{
    char c = 122;
    my_putchar(c);
    while (c >= 98)
    {
        c = c - 1;
        my_putchar(c);
    }
    return (0);
}

