/*
** EPITECH PROJECT, 2019
** my_str_to_word_array
** File description:
** my_str_to_word_array
*/

#include <my.h>

int my_str_word_len(char const *str)
{
    int j;

    for (j = 0; str[j] != '\0' && my_char_isalphanumeric(str[j]) != 0; j++);
    return (j);
}

char *my_strdupn(char const *src, int nb)
{
    char *cpy = malloc(sizeof(char) * nb + 1);
    int d = 0;

    if (cpy == NULL)
        return (NULL);
    for (int j = 0; d < nb; j++)
        if (my_char_isalphanumeric(src[j]) == 1)
            cpy[d++] = src[j];
    cpy[d] = '\0';
    return (cpy);
}

int count_cat(char const *str)
{
    int num_space = 2;

    for (int j = 0; str[j] != '\0'; j++)
        if ( my_char_isalphanumeric(str[j]) == 0
        && my_char_isalphanumeric(str[j + 1]) == 1)
            num_space++;
    if (my_char_isalphanumeric(str[0]) == 0) num_space--;
    return (num_space);
}

char **my_str_to_word_array(char const *str)
{
    int word_len = 0;
    char **tab = NULL;
    int h = 0;
    int num_space = count_cat(str);

    if (str == NULL)
        return (NULL);
    tab = malloc(sizeof(char *) *  num_space);
    for (int j = 0; str[j] != '\0'; j++) {
        if (j == 0 ||  my_char_isalphanumeric(str[j - 1]) == 0)
            word_len = my_str_word_len(&str[j]);
        if (word_len != 0) {
            tab[h] = my_strdupn(&str[j], word_len);
            word_len = 0;
            h++;
        }
    }
    tab[h] = NULL;
    return (tab);
}