/*
** EPITECH PROJECT, 2019
** my_strstr
** File description:
** string finder
*/

int my_strstr(char *str, char const *to_find)
{
    int z = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != to_find[z]) {
            z = 0;
        }
        else
            z++;
        if (z > my_strlen(to_find) - 1)
            return (1);
    }
    return (0);
}
