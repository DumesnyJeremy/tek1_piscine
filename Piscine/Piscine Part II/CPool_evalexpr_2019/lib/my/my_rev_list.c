/*
** EPITECH PROJECT, 2019
** my_rev_list
** File description:
** my_rev_list
*/

#include "my.h"
#include "mylist.h"

void my_rev_list(linked_list_t **begin)
{
    linked_list_t *next = NULL;
    linked_list_t *prev = NULL;

    while ((*begin) != NULL) {
        next = (*begin)->next;
        (*begin)->next = prev;
        prev = (*begin);
        (*begin) = next;
    }
    (*begin) = prev;
}
