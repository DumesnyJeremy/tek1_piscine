/*
** EPITECH PROJECT, 2019
** concat_params
** File description:
** list *av[] line by line
*/

#include "my.h"

char *my_strcat_add(char *dest, char *add, char const *str)
{
    int j = 0;

    if (dest != NULL && dest[0] != '\0') {
        for (j = 0; dest[j] != '\0'; j++);
        for (int i = 0; add[i] != '\0'; i++, j++)
            dest[j] = add[i];
    }
    for (int i = 0; str[i] != '\0'; i++, j++)
        dest[j] = str[i];
    dest[j] = '\0';
    return (dest);
}

char *concat_params(int ac, char **av)
{
    int line = 0;
    int i = 0;
    char *dest;

    for (i = 0; i < ac; i++)
        line += my_strlen(av[i]);
    dest = malloc(sizeof(char) * (line + i + 1));
    dest[0] = '\0';
    for (int i = 0; i < ac; i++) {
        dest = my_strcat_add(dest, "\n", av[i]);
    }
    return (dest);
}
