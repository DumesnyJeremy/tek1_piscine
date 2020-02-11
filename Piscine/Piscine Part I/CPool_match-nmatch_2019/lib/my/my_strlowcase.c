/*
** EPITECH PROJECT, 2019
** task09
** File description:
** oui
*/

char *my_strlowcase(char *str)
{
    int a = 0;
    for (; str[a]; ) {
        if ((str[a] <= 'Z') && ('A' <= str[a]))
            str[a] = str[a] + 32;
        a++;
    }
    return (str);
}

