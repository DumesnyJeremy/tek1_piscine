/*
** EPITECH PROJECT, 2019
** task06
** File description:
** oui
*/

int my_strcmp(char const *s1, char const *s2)
{
    int a = 0;
    for (s1[a] == s2[a] ; s1[a] && s2[a] != '\0'; a++);

    return (s1[a] - s2[a]);
}
