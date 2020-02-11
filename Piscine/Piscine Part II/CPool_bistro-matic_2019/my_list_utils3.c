/*
** EPITECH PROJECT, 2019
** eval_expr
** File description:
** Linked list functions
*/

#include "lib.h"

void op_priority2(dlist_node_t *save, dlist_node_t *to_find)
{
    int checkb = 0;
    while (((to_find->back->value >= 0 && to_find->back->value <= 9) ||
            to_find->back->is_calcul == 1) && to_find->back->check != 1 &&
            to_find->back->weight == to_find->weight &&
            to_find->next->weight == to_find->weight) {
        if (to_find->back->back == NULL) {
            checkb++;
            break;
        }
        to_find = to_find->back;
    }
    if (checkb == 1)
        to_find->back->weight += 1;
    for (; to_find != save; to_find = to_find->next) {
        to_find->weight = to_find->weight + 1;
        to_find->check = 1;
    }
}

void op_priority(dlist_node_t *to_find)
{
    int checkn = 0;
    dlist_node_t *save = to_find;
    if (to_find->back->weight != to_find->weight &&
        to_find->next->weight != to_find->weight)
        return;
    op_priority2(save, to_find);
    op_priority3(save, to_find, checkn);
}

void op_priority3(node_t *save, node_t *to_find, int checkn)
{
    if (to_find->check != 1 &&
        (to_find->back->weight == to_find->weight ||
        to_find->next->weight == to_find->weight)) {
        to_find->weight = to_find->weight + 1;
        to_find->check = 1;
    }
    while (((to_find->next->value >= 0 && to_find->next->value <= 9) ||
            to_find->next->is_calcul == 1) && to_find->next->check != 1) {
        if (to_find->next->next == NULL) {
            checkn++;
            break;
        }
        to_find = to_find->next;
    }
    if (checkn == 1)
        to_find->next->weight += 1;
    for (; to_find != save; to_find = to_find->back) {
        to_find->weight += 1;
        to_find->check = 1;
    }
}

dlist_node_t *new_dlist_node(int x, int y)
{
    dlist_node_t *element;
    element = malloc(sizeof(*element));
    element->is_calcul = 0;
    element->is_op = 0;
    element->weight = y;
    element->check = 0;
    element->value = x;
    element->next = NULL;
    element->back = NULL;
    element->found = 0;
    return (element);
}

dlist_t *push_back_list_op(dlist_t *li, int x, int y)
{
    dlist_node_t *element = new_dlist_node(x, y);
    element->found = 1;
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
