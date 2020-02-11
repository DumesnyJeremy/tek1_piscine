/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** lenth of an str
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}
