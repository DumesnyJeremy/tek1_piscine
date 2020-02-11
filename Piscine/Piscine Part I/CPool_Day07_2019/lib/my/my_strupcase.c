/*
** EPITECH PROJECT, 2019
** task08
** File description:
** oui
*/

char *my_strupcase(char *str)
{
    int a = 0;
    for (; str[a];) {
        if ((str[a] <= 'z') && ('a' <= str[a]))
            str[a] = str[a] - 32;
        a++;
    }
    return (str);
}
