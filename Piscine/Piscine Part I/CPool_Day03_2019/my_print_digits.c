/*
** EPITECH PROJECT, 2019
** task03
** File description:
** print_digits
*/

int my_print_digits(void)
{
    char c = 48;

    my_putchar(c);
    while (c <= 56)
    {
        c = c + 1;
        my_putchar(c);
    }
    return (0);
}
