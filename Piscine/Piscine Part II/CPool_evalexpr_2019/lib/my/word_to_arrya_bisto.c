/*
** EPITECH PROJECT, 2019
** bisto word
** File description:
** bistro word
*/

#include <my.h>
#include <evalexpr.h>

int my_str_word_len_bisto(char const *str)
{
    int j;

    for (j = 0; str[j] != '\0' && my_char_isnum(str[j]) != 0; j++);
    return (j);
}

char *my_strdupn_bistor(char const *src, int nb)
{
    char *cpy = malloc(sizeof(char) * nb + 1);
    int d = 0;

    if (cpy == NULL)
        return (NULL);
    for (int j = 0; d < nb; j++)
        if (my_char_isnum(src[j]) == 1)
            cpy[d++] = src[j];
    cpy[d] = '\0';
    return (cpy);
}

int count_cat_bistor(char const *str)
{
    int num_space = 2;

    for (int j = 0; str[j] != '\0'; j++){
        if (IS_OPRATOR2(str[j]))
            num_space++;
        if (my_char_isnum(str[j]) == 0 && my_char_isnum(str[j + 1]) == 1)
            num_space++;
    }
    if (my_char_isnum(str[0]) == 0) num_space--;
    return (num_space);
}

char **word_to_arrya_bi(char const *str)
{
    int word_len = 0;
    char **tab = NULL;
    int h = 0;
    int num_space = count_cat_bistor(str);

    if (str == NULL)
        return (NULL);
    tab = malloc(sizeof(char *) *  num_space);
    for (int j = 0; str[j] != '\0'; j++) {
    }
    tab[h] = NULL;
    return (tab);
}