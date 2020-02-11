/*
** EPITECH PROJECT, 2019
** my_list_calcul
** File description:
** Calcul the result
*/

#include "lib.h"

calcul_t *calcul_node(int *first_calcul, dlist_node_t *first_max)
{
    int check = 0;
    int *ptr = &check;
    int first_op = 0;
    calcul_t *calcul = new_calcul_t();
    if (first_max->is_op == 1)
        first_op = 1;
    dlist_node_t *tmp = calcul_node2(calcul, first_calcul, first_op, first_max);
    first_op = 0;
    if (tmp->is_op == 1)
        first_op = 1;
    tmp = calcul_node3(calcul, tmp, ptr, first_op);
    calcul_node4(calcul, tmp, first_max, ptr);
    return (calcul);
}

node_t *calcul_node2(calcul_t *calcul, int *f_calcul, int op, node_t *max)
{
    dlist_node_t *tmp = max;
    if (op == 1)
        tmp = tmp->next;
    for (; tmp->is_op != 1; tmp = tmp->next) {
        calcul->a += tmp->value;
        if (tmp->next == NULL)
            break;
        if (tmp->next->value >= 0 && tmp->next->value <= 9)
            calcul->a *= 10;
    }
    if (op == 1)
        calcul->a *= -1;
    if (max->back != NULL && *f_calcul != 1 && max->back->value == '-'
        && max->back->weight == max->weight && max->back->back == NULL) {
        calcul->a *= -1;
        *f_calcul = 1;
    }
    calcul->op = tmp->value;
    if (tmp->next != NULL) tmp = tmp->next;
    return (tmp);
}

dlist_node_t *calcul_node3(calcul_t *calcul, node_t *tmp, int *ptr, int op)
{
    if (op == 1 && tmp->next != NULL)
        tmp = tmp->next;
    while (tmp->is_op != 1) {
        calcul->b += tmp->value;
        if (tmp->next == NULL) {
            *ptr = 1;
            break;
        }
        if (tmp->next->value >= 0 && tmp->next->value <= 9)
            calcul->b *= 10;
        tmp = tmp->next;
    }
    if (op == 1)
        calcul->b *= -1;
    return (tmp);
}

void calcul_node4(calcul_t *calcul, node_t *tmp, node_t *max, int *ptr)
{
    calcul->weight = max->weight;
    if (tmp->weight != calcul->weight - 2) {
        if (tmp->next == NULL && tmp->weight != 0)
            calcul->weight = max->back->weight;
        else calcul->weight = tmp->weight;
    }
    else calcul->weight -= 1;
    if (*ptr == 1)
        calcul->tail = NULL;
    else calcul->tail = tmp;
    calcul->head = max->back;
    calcul->result = do_op(calcul->a, calcul->op, calcul->b);
}

calcul_t *new_calcul_t(void)
{
    calcul_t *element;
    element = malloc(sizeof(*element));
    element->weight = 0;
    element->a = 0;
    element->b = 0;
    element->op = 0;
    element->result = 0;
    element->head = NULL;
    element->tail = NULL;
    return (element);
}
