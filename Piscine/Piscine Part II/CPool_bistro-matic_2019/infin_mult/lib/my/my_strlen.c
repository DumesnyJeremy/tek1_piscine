/*
** EPITECH PROJECT, 2019
** task03
** File description:
** lala
*/

#include <unistd.h>

int my_strlen(char const *str)
{
    int count = 0;
    int i = 0;
    if (str == NULL)

        return (0);
    while (str[count] != '\0')
    {
        count++;
    }
    return (count);
}
