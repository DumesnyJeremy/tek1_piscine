/*
** EPITECH PROJECT, 2019
** my_list_calcul2
** File description:
** Calcul the result
*/

#include "lib.h"

void last_check(dlist_t *li)
{
    dlist_node_t *tmp = li->end;
    for (; tmp->is_op != 1; tmp = tmp->back);
    if (tmp->value == '-' && tmp->back->weight < tmp->weight) {
        for (; tmp != li->end; tmp = tmp->next)
            tmp->weight = tmp->back->weight;
        tmp->weight = tmp->back->weight;
    }
}
