/*
** EPITECH PROJECT, 2019
** task14
** File description:
** oui
*/

int my_str_islower(char const *str)
{
    int a = 0;
    if (str[a] == '\0')
        return (1);
    while (str[a] != '\0') {
        if (str = ((str[a] >= 'a') && ('z'  >= str[a]))) {
            a++;
        return (1);
        }
    else
        return (0);
    }
}
