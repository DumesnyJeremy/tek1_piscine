/*
** EPITECH PROJECT, 2019
** my_show_word_array
** File description:
** my_show_word_array
*/

#include "my.h"

int my_show_word_array(char * const *top)
{
    for (int i = 0; top[i] != NULL; i++) {
        my_putstr(top[i]);
        my_putchar('\n');
    }
    return (0);
}
