/*
** EPITECH PROJECT, 2019
** substraction
** File description:
** infinadd
*/

#include <my.h>
#include <infinadd.h>

int compre_num_size(char *s1, char *s2, char const *base)
{
    if (my_strlen(s1) - 1 > my_strlen(s2) - 1)
        return (1);
    else if (my_strlen(s1) - 1 < my_strlen(s2) - 1)
        return (-1);
    else
        return (compre_num_base(s1, s2, base));
}

int compre_num_base(char *s1, char *s2, char const *base)
{
    int i = 0, n1 = 0, n2 = 0;

    for (; s1[i] != '\0' && s1[i] == s2[i]; i++);
    if (s1[i] == '\0' && s2[i] == '\0') return (0);
    n1 = digit_to_int(s1[i], base);
    n2 = digit_to_int(s2[i], base);
    if (base[n1] == '\0' || base[n2] == '\0') return (84);
    return (n1 - n2);
}

char calclu(char s1, char s2, char const *base, int *save)
{
    int tmp = 0;

    if (digit_to_int(s1, base) - *save < digit_to_int(s2, base)) {
        tmp = digit_to_int(s1, base) + 10 - *save;
        tmp -= digit_to_int(s2, base);
        *save = 1;
        return (int_to_digit(tmp, base));
    } else {
        tmp = digit_to_int(s1, base) - *save;
        tmp -= digit_to_int(s2, base);
        *save = 0;
        return (int_to_digit(tmp, base));
    }
}

char *infinsub(char *s1, char *s2, char const *base, int n)
{
    int save = 0, i = 0, l_1 = 0, l_2 = 0;
    char *res = malloc(sizeof(char) * (my_strlen(s1) + (my_strlen(s2))));

    if (n == 1)
        s1 = my_getnbr_to_str(s1);
    else s2 = my_getnbr_to_str(s2);
    if (compre_num_size(s1, s2, base) < 0) my_swap_str(&s1, &s2);
    l_1 = my_strlen(s1) - 1;
    l_2 = my_strlen(s2) - 1;

    for (; l_1 >= 0 || l_2 >= 0; l_1--, l_2--)
        res[i++] = calclu(s1[l_1], s2[l_2], base, &save);
    res[i] = '\0';
    my_revstr(res);
    return (res);
}
