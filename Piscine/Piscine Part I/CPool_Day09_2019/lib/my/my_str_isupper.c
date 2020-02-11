/*
** EPITECH PROJECT, 2019
** task15
** File description:
** oui
*/

int my_str_isupper(char const *str)
{
    int a = 0;
    if (str[a] == '\0')
        return (1);
    while (str[a] != '\0') {
        if (str = ((str[a] <= 'A') && ('Z' <= str[a]))) {
            a++;
        return (1);
        }
        else
            return (0);
    }
}
