/*
** EPITECH PROJECT, 2019
** List functions
** File description:
** eval_expr
*/

#include "lib.h"

int search_low_weight(dlist_t *li)
{
    int low_weight = search_max_weight(li);
    dlist_node_t *tmp = li->begin->next;
    while (tmp->next != NULL) {
        if (tmp->weight < low_weight)
            low_weight = tmp->weight;
        tmp = tmp->next;
    }
    return (low_weight);
}

void no_op(char *expr)
{
    int check = 0;
    for (int i = 0; expr[i] != '\0'; i++)
        if (expr[i] == '%' || expr[i] == '-' ||
            expr[i] == '+' || expr[i] == '*' ||
            expr[i] == '/')
            check++;
    if (check == 0 || (check == 1 && expr[0] == '-')) {
        my_put_nbr(my_atoi(expr));
        exit(EXIT_SUCCESS);
    }
    if (check == 1 && (expr[0] == '/' || expr[0] == '*' || expr[0] == '%')) {
        expr++;
        my_put_nbr(my_atoi(expr));
        exit(EXIT_SUCCESS);
    }
    if (check == 1 && expr[0] == '+') {
        expr++;
        my_put_nbr(my_atoi(expr));
        exit(EXIT_SUCCESS);
    }
}
