/*
** EPITECH PROJECT, 2019
** catn
** File description:
** oui
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int a = 0;
    int b = 0;

    for (;dest[b] ;)
        b++;
    while (src[a] && nb < a ) {
        dest[b] = src[a];
        a++;
    }
    dest[b] = '\0';
    return (dest);
}
