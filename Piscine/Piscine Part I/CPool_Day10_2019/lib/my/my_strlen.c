/*
** EPITECH PROJECT, 2019
** task03
** File description:
** lala
*/

int my_strlen(char const *str)
{
    int count = 0;

    while (str[count] != '\0')
    {
        count++;
    }
    return (count);
}
