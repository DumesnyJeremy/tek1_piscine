/*
** EPITECH PROJECT, 2019
** list_utils1
** File description:
** Linked list functions
*/

#include "lib.h"

dlist_t *push_back_list(dlist_t *li, int x, int y)
{
    dlist_node_t *element = new_dlist_node(x, y);
    if (is_empty_list(li)) {
        li = malloc(sizeof(*li));
        li->length = 0;
        li->begin = element;
        li->end = element;
    }
    else {
        li->end->next = element;
        element->back = li->end;
        li->end = element;
    }
    li->length++;
    return (li);
}

dlist_t *push_front_list(dlist_t *li, int x)
{
    dlist_node_t *element = new_dlist_node(x, 0);
    element->is_op = 1;
    if (is_empty_list(li)) {
        li = malloc(sizeof(*li));
        li->length = 0;
        li->begin = element;
        li->end = element;
    }
    else {
        li->begin->back = element;
        element->next = li->begin;
        li->begin = element;
    }
    return (li);
}

dlist_t *pop_front_list(dlist_t *li)
{
    if (is_empty_list(li))
        return (new_list());
    if (li->begin == li->end) {
        free (li);
        return (new_list());
    }
    dlist_node_t *tmp = li->begin;
    li->begin = li->begin->next;
    li->begin->back = NULL;
    tmp->next = NULL;
    tmp->back = NULL;
    free (tmp);
    li->length--;
    return (li);
}

dlist_t *clear_list(dlist_t *li)
{
    while (!is_empty_list(li))
        li = pop_front_list(li);
    return (new_list());
}

int search_max_weight(dlist_t *li)
{
    int max_weight = 0;
    dlist_node_t *tmp = li->begin;
    while (tmp->next != NULL) {
        if (tmp->weight > max_weight)
            max_weight = tmp->weight;
        tmp = tmp->next;
    }
    return (max_weight);
}
