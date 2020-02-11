/*
** EPITECH PROJECT, 2019
** infinadd
** File description:
** infinadd
*/

#include <my.h>
#include <infinadd.h>

int digit_to_int(char c, char const *base)
{
    int i = 0;

    for (; base[i] != '\0'; i++)
        if (base[i] == c)
            return (i);
    return (0);
}

char int_to_digit(int n, char const *base)
{
    int check = my_strlen(base);

    if (n >= check || n < 0)
        return (-1);
    return (base[n]);
}

char *infinadd(char *s1, char *s2, char const *base, int n)
{
    int l_1 = my_strlen(s1) - 1, l_2 = my_strlen(s2) - 1;
    int base_n = my_strlen(base);
    int save = 0;
    int tmp = 0;
    int i = 0;
    char *reslut = malloc(sizeof(char) * ((l_1 >= l_2 ? l_1 : l_2) + 3 + n));

    if (n == 1)
        reslut[i++] = '-';
    for (; l_1 >= n || l_2 >= n; l_1--, l_2--) {
        tmp = (l_1 < n) ? 0 : digit_to_int(s1[l_1], base);
        tmp += (l_2 < n) ? 0 : digit_to_int(s2[l_2], base);
        reslut[i++] = int_to_digit((tmp + save) % base_n, base);
        save = (tmp + save) / base_n;
    }
    if (save != 0)
        reslut[i++] = int_to_digit(save, base);
    reslut[i] = '\0';
    (n == 1) ? my_revstr(&reslut[1]) : my_revstr(reslut);
    return (reslut);
}