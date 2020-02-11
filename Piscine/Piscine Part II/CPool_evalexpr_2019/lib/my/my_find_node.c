/*
** EPITECH PROJECT, 2019
** my_find_node
** File description:
** my_find_node
*/

#include "my.h"
#include "mylist.h"

linked_list_t *my_find_node(linked_list_t *begin,
void *const *data_ref, int (*cmp)())
{
    linked_list_t *tmp = begin;

    while (tmp) {
        if (cmp(tmp->data, data_ref) == 0)
            return (tmp);
        tmp =  tmp->next;
    }
    return (begin);
}
