/*
** EPITECH PROJECT, 2019
** task02
** File description:
** n
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    
    while (src[i] != '\0' && i <= n) {
        dest[i] = src[i];
        i++;
    }
    if (n > i)
        dest[i] = '\0';
    return (dest);
}
