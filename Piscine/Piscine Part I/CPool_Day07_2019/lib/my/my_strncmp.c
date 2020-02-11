/*
** EPITECH PROJECT, 2019
** task07
** File description:
** oui
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int a = 0;
    int b = 0;

    while (b < n) {
        for (s1[a] == s2[a]; s1[a] && s2[a] != '\0'; a++);

        n++;
        return (s1[a] - s2[a]);
}
