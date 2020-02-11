/*
** EPITECH PROJECT, 2019
** my_list_size
** File description:
** my_list_size
*/

#include "my.h"
#include "mylist.h"

int my_list_size(linked_list_t const *begin)
{
    int i = 0;

    while (begin) {
        i++;
        begin = begin->next;
    }
    return (i);
}
