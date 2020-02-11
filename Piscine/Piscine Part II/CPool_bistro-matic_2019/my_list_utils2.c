/*
** EPITECH PROJECT, 2019
** list_utils2
** File description:
** Linked list functions
*/

#include "lib.h"

dlist_t *new_list(void)
{
    return (NULL);
}

bool is_empty_list(dlist_t *li)
{
    if (li == NULL)
        return true;
    return false;
}

dlist_node_t *search_list_op(dlist_t *li, int to_find)
{
    if (is_empty_list(li))
        return (li->begin);
    dlist_node_t *tmp = li->begin;
    while ((tmp->value != to_find || tmp->found != 1) && tmp->is_calcul != 1) {
        if (tmp->next == NULL)
            break;
        tmp = tmp->next;
    }
    tmp->found = 0;
    return (tmp);
}

void print_list(dlist_t *li)
{
    if (is_empty_list(li)) {
        my_putstr("Nothing to display, list is empty");
        return;
    }
    dlist_node_t *tmp = li->begin;
    while (tmp != NULL) {
        if (tmp->is_op == 1) {
            my_putchar(tmp->value);
            tmp = tmp->next;
        }
        else {
            my_put_nbr(tmp->value);
            tmp = tmp->next;
        }
    }
    my_putchar('\n');
}

dlist_node_t *search_first_max(dlist_t *li, int to_find)
{
    if (is_empty_list(li))
        return (li->begin);
    dlist_node_t *tmp = li->begin;
    if (tmp->is_op == 1)
        tmp = tmp->next;
    while (tmp->weight != to_find && tmp->next != NULL)
        tmp = tmp->next;
    return (tmp);
}
