/*
** EPITECH PROJECT, 2019
** my_list_utils4
** File description:
** List functions
*/

#include "lib.h"

dlist_t *push_back_list_plusneg(dlist_t *li, int x, int y)
{
    dlist_node_t *element = new_dlist_node(x, y);
    element->is_op = 1;
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

dlist_t *pop_back_list(dlist_t *li)
{
    if (is_empty_list(li))
        return (new_list());
    if (li->end == li->begin) {
        free (li);
        return (new_list());
    }
    dlist_node_t *tmp = li->end;
    li->end = li->end->back;
    li->end->next = NULL;
    tmp->next = NULL;
    tmp->back = NULL;
    free (tmp);
    li->length--;
    return (li);
}

void print_list_weight(dlist_t *li)
{
    if (is_empty_list(li)) {
        my_putstr("Nothing to display, list is empty");
        return;
    }
    dlist_node_t *tmp = li->begin;
    while (tmp != NULL) {
        my_put_nbr(tmp->weight);
        tmp = tmp->next;
    }
    my_putchar('\n');
}

dlist_t *new_node(calcul_t *result, dlist_t *li)
{
    dlist_node_t *new_node = new_dlist_node(result->result, result->weight);
    new_node->is_calcul = 1;
    new_node->back = result->head;
    if (result->tail == NULL) {
        li->end = new_node;
        new_node->next = NULL;
    }
    else {
        new_node->next = result->tail;
        result->tail->back = new_node;
    }
    dlist_node_t *tmp = result->head;
    while (tmp->next != new_node->next) {
        tmp = tmp->next;
        free(tmp);
        li->length -= 1;
    }
    result->head->next = new_node;
    li->length += 1;
    return (li);
}
