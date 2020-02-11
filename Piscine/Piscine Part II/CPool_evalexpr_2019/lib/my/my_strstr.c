/*
** EPITECH PROJECT, 2019
** my_strstr
** File description:
** str str
*/

#include "my.h"

char *my_strstr(char *str, char const *to_find)
{
    int b = 0;

    for (int i = 0; str[i] != '\0'; i++, b = i) {
        if (str[i] == to_find[0])
            for (int j = 0; to_find[j] == str[b]; j++, b++)
                if (to_find[j + 1] == '\0')
                    return (&str[i]);
    }
}
