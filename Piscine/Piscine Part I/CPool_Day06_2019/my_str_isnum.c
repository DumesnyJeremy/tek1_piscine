/*
** EPITECH PROJECT, 2019
** task13
** File description:
** oui
*/

int my_str_isnum(char const *str)
{
    int a = 0;
    while (str[a] != '\0') {
        if (str = ((str[a] <= 48) && (57 <= str[a])))
            a++;
            return (1);
        }
    else
        return (0);
}
