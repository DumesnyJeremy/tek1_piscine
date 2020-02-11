/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** lenth of an str
*/

int my_strlen_carac(char const *str)
{
    int sep_count = 0;
    int i = 0;

    while (str[i] != '\0') {
        if ((str[i] < 'a' || str[i] > 'z') &&
            (str[i] < 'A' || str[i] > 'Z'))
            sep_count++;
        i++;
    }
    return (i - sep_count);
}
