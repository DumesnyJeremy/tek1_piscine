/*
** EPITECH PROJECT, 2019
** evalexpr
** File description:
** Compute a calcul
*/

#include "lib.h"

int eval_expr(char const *str, int result, int weight, int check)
{
    dlist_t *mylist = new_list();
    int first_calcul = 0;
    int *ptr = &first_calcul;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9')
            mylist = push_back_list(mylist, (str[i] - '0'), weight);
        if (str[i] == '+' || str[i] == '-')
            mylist = push_back_list_plusneg(mylist, str[i], weight);
        if (str[i] == '*' || str[i] == '%' || str[i] == '/')
            mylist = push_back_list_op(mylist, str[i], weight);
        if (str[i] == '(') { weight++; }
        if (str[i] == ')') { weight--; }
    }
    if_check_double(mylist);
    eval_expr2(str, mylist, ptr);
    char *tab = malloc(sizeof(char) * mylist->length);
    eval_expr3(tab, mylist, check, ptr);
    free(tab);
    return (eval_expr4(mylist, result, ptr));
}

void eval_expr2(char const *str, dlist_t *li, int *first_calcul)
{
    if (li->begin->value != '-') {
        push_front_list(li, '-');
        *first_calcul = 1;
    }
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == '/' || str[i] == '*' || str[i] == '%')
            op_priority(search_list_op(li, str[i]));
}

void eval_expr3(char *tab, dlist_t *mylist, int check, int *first_calcul)
{
    int j = 0;
    while (mylist->length > 2) {
        check = eval_expr5(check, mylist, tab, j);
        node_t *first_max = search_first_max(mylist, search_max_weight(mylist));
        new_node(calcul_node(first_calcul, first_max), mylist);
    }
}

int eval_expr4(dlist_t *mylist, int result, int *first_calcul)
{
    if (mylist->begin->value == '-')
        pop_front_list(mylist);
    result = mylist->begin->value;
    if (*first_calcul == 0)
        result *= -1;
    clear_list(mylist);
    return (result);
}

int eval_expr5(int check, dlist_t *mylist, char *tab, int j)
{
    dlist_node_t *tmp = mylist->begin;
    if (search_max_weight(mylist) == search_low_weight(mylist)
        && check == 0) {
        for (; tmp->next != NULL; tmp = tmp->next) {
            if (tmp->value == '/' ||
                tmp->value == '*' || tmp->value == '%') {
                tab[j] = tmp->value;
                tmp->found = 1;
                j++;
            }
        }
        check = 1;
        for (int i = 0; tab[i] != '\0'; i++)
            op_priority(search_list_op(mylist, tab[i]));
        return (check);
    }
    return (check);
}
