/*
** EPITECH PROJECT, 2019
** get
** File description:
** get
*/

#include <my.h>

int check_negative2(char const *str, int n)
{
    int j = 0;
    if (n > 0 && IS_PNS(str[n]))
        if (!(str[n - 1] == '(' && IS_NUM(str[n + 1])))
            return (-1);
    for (; IS_PNS(str[n]) && str[n] != '\0' && my_char_isnum(str[n]) != 1; n++)
        if (str[n] == '-')
            j++;
    return (str[n] == '\0' || my_char_isnum(str[n]) == 0 ? -1 : j % 2);
}

char *my_getnbr_to_str2(char const *str, int *n)
{
    int j = 0;
    int i = *n;
    char *change = malloc(sizeof(char) * my_strlen(str) + 2);

    if (check_negative2(str, i) == -1) return (NULL);
    if (check_negative2(str, i) == 1)
        change[j++] = '-';
    for (; str[i] != '\0' && my_char_isnumabs(str[i]) == 1; i++) {
        if (i > 0 && IS_PNS(str[i]) && my_char_isnum(str[i - 1]) == 1) {
            *n = i - 1;
            return (change);
        }
        if (my_char_isnum(str[i]) == 1) {
            change[j++] = str[i];
            change[j] = '\0';
        }
    }
    *n = i - 1;
    change[j] = '\0';
    return (change);
}
