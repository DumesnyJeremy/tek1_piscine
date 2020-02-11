/*
** EPITECH PROJECT, 2019
** task01
** File description:
** print_alpha
*/

int my_print_alpha(void)
{
    char c = 97;
    my_putchar(c);
    while (c <= 121)
    {
        c = c + 1;
        my_putchar(c);
    }
    return (0);
}
