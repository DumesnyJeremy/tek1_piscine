/*
** EPITECH PROJECT, 2019
** task03
** File description:
** rev
*/

char *my_revstr(char *str)
{
    char *v = str;
    char temp;
    int a = 0;
    int b = 0;
    int c = 0;

    while (str[a] != '\0') {
        a++;
    }
    a--;
    c = a / 2;
    while (a > c) {
        temp = str[b];
        v[b] = str[a];
        v[a] = temp;
        b++;
        a--;
    }
    return (v);
}
