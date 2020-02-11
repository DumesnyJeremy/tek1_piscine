/*
** EPITECH PROJECT, 2019
** my_showstr
** File description:
** my_showstr
*/

#include <unistd.h>
#include <my.h>

void my_putnbr_base_cul1(int nbr, char const *base, int len)
{
    if (nbr >= len) {
        my_putnbr_base_cul1(nbr / len, base, len);
        my_putnbr_base_cul1(nbr % len, base, len);
    } else
        write (1, &base[nbr], 1);
}

int my_putnbr_base1(int nbr, char const *base)
{
    int i;

    if (nbr < 0) {
        nbr * -1;
        write(1, "-", 1);
    }
    for (i = 0; base[i] != '\0'; i++);
    my_putnbr_base_cul1(nbr, base, i);
    return (0);
}

int my_showstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (my_char_isprintable(str[i]) == 1)
            write(1, &str[i], 1);
        else {
            if (str[i] <= 15)
                write(1, "\\0", 2);
            else
                write(1, "\\", 1);
            my_putnbr_base1(str[i], "0123456789abcdef");
        }
    }
    return (0);
}