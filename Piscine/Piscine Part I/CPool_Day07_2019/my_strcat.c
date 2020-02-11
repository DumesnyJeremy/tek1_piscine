/*
** EPITECH PROJECT, 2019
** strcat
** File description:
** oui
*/

char *my_strcat(char *dest, char const *src)
{
    int a = 0;
    int b = 0;

    for (; dest[a] != '\0';)
        a++;
    while (src[b] != '\0') {
        dest[a + b] = src[b];
        b++;
    }
    dest[a + b] = '\0';
    return (dest);
}
