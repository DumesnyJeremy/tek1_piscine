/*
** EPITECH PROJECT, 2019
** task06
** File description:
** oui
*/

int my_strcmp(char const *s1, char const *s2)
{
    int a = 0;
    for (s1[a] == s2[a] ; s1[a] && s2[a] != '\0' ; s2[a] != '\0')
        a = a + 1;
    return (s1[a] - s2 [a]);
}
