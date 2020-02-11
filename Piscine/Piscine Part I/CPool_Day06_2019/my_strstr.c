/*
** EPITECH PROJECT, 2019
** task05 
** File description:
** oui
*/

char *my_strstr(char *str, char const *to_find)
{
    int a = 1;
    int b;

    if (str[a] != '\0') {
        b = 0;
        while (to_find[b] == str[a + b]) {
            while (to_find[b] + 1 == '\0') {
                return (str + a);
            }
            b++;
        }
        a++;
    }
    return (0);
}
