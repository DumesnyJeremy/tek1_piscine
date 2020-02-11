/*
** EPITECH PROJECT, 2019
** task12
** File description:
** oui
*/

int my_str_isalpha(char const *str)
{
    int a = 0;
    while (str[a] != '\0') {
        if (str != ((str[a] <= 'Z') && ('A' <= str[a]))) {
            if (str != ((str[a] <= 'z') && ('a' <= str[a])))
                a++;
            return (0);
        }
    else
        return (1);
    }
}
