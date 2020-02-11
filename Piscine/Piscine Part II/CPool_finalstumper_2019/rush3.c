/*
** EPITECH PROJECT, 2019
** final_stumper
** File description:
** rush3
*/

#include <unistd.h>
#include "rush3"

int gest_err(int ac, char **av)
{
    if ((ac[1] || ac[2]) == "0")
        return (84);
    if ((ac[1] || ac[2]) == NULL)
        return (84);
}

int count(char *str, int ac, char **av)
{
    int i = my_strlen(str);
    int j = 2;
    
    write (1, '[', 1);
    while (j < i)
    {
        my_putchar(str[j]);
        j++;
    }
    write (1, ']', 1);
    write (1, " ", 1);
    for (int a = 0; ac[1] >= 48 && ac[2] <= 57; a++)
        my_putchar(av[a]);

    write (1, " ", 1);
    for (int b = 0; ac[2] >= 48 && ac[2] <= 57; b++)
        my_putchar(av[b]);
    if (ac[1] == "1" || ac[2] == "1") {
        same(str, ac, av);
        find_rush(str);
    }
}

int same(char *str, int ac, char **av)
{
    write (1, " ", 1);
    write (1, "|", 1);
    write (1, "|", 1);
    write (1, " ", 1);
    write (1, "[", 1);
    write (1, "r", 1);
    write (1, "u", 1);
    write (1, "s", 1);
    write (1, "h", 1);
    write (1, "1", 1);
    write (1, "-", 1);
}

int find_rush(char *str)
{
    if (my_strstr(str, "3")) == 1 {
            write (1, "4", 1)
        }
    if (my_strstr(str, "4")) == 1 {
            write (1, "5", 1)
        }
    if (my_strstr(str, "5")) == 1 {
            write (1, "3", 1)
        }
}
