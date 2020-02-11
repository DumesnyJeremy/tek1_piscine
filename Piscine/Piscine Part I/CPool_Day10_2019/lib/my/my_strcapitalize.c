/*
** EPITECH PROJECT, 2019
** capi
** File description:
** oui
*/

char *my_strcapitalize(char *str)
{
    int a = 0;
    for (; str[a];) {
        if ((str[a] <= 'z') && ('a' <= str[a]))
            str[a] = str[a] - 32;
        a++;
    }
    if ((str[0] <= 'z') && ('a' <= str[0]))
        str[a] = str[a] + 32;
    for (a = 0; str[a] != '\0';)
        if (str[a] != (str[a] <= 'z') && ('a' <= str[a])) {
            a++;
            str[a] = str[a] + 32;
        }
    return (str);
}
