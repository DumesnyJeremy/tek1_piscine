/*
** EPITECH PROJECT, 2019
** eval_expre
** File description:
** opration to tab
*/
#include <my.h>
#include <evalexpr.h>

int is_opration(char *str, int n)
{
    if (IS_OPRATION(str[n - 1]) == 1 &&  IS_OPRATION(str[n + 1]))
        return (1);
    return (0);
}

char **opration_to_tab(char const *opt)
{
    int h = 0;
    char *tmp = NULL;
    char **tab = malloc(sizeof(char *) * (count_cat_bistor(opt) + 2));

    for (int n = 0; opt[n] != '\0'; n++) {
        tmp = my_getnbr_to_str2(opt, &n);
        if (tmp == NULL) {
            if (IS_OPRATOR2(opt[n]))
                tab[h++] = my_strndup(&opt[n], 1);
        }
        else
            tab[h++] = tmp;
    }
    tab[h] = '\0';
    return (tab);
}
