/*
** EPITECH PROJECT, 2019
** bistromatic
** File description:
** error gestion
*/

#include "lib.h"
#include "bistromatic.h"

void unmatched_parenthesis(char *expr)
{
    int x = 0;
    for (int i = 0; expr[i] != '\0'; i++) {
        if (expr[i] == '(')
            x++;
        if (expr[i] == ')')
            x--;
    }
    if (x != 0) {
        my_putstr (SYNTAX_ERROR_MSG);
        exit(EXIT_USAGE);
    }
}

void check_if_char(char *expr, char *base, char *ops)
{
    int check = 0;
    for (int i = 0; expr[i] != '\0'; i++) {
        if (expr[i] != '0' && expr[i] != '1' && expr[i] != '2' &&
            expr[i] != '3' && expr[i] != '4' && expr[i] != '5' &&
            expr[i] != '6' && expr[i] != '7' && expr[i] != '8' &&
            expr[i] != '9' && expr[i] != '+' && expr[i] != '-' &&
            expr[i] != '*' && expr[i] != '/' && expr[i] != '%' &&
            expr[i] != '(' && expr[i] != ')') { my_putstr (SYNTAX_ERROR_MSG);
            exit(EXIT_USAGE);
        }
        for (int j = 0; base[j] != '\0'; j++)
            if (expr[i] == base[j]) { check++; }
        for (int k = 0; ops[k] != '\0'; k++)
            if (expr[i] == ops[k]) { check++; }
    }
    if (check != my_strlen(expr)) { my_putstr (SYNTAX_ERROR_MSG);
        exit(EXIT_USAGE);
    }
}

void if_check_double(dlist_t *mylist)
{
    dlist_node_t *tmp = mylist->begin;
    for (; tmp->next != NULL; tmp = tmp->next)
        if ((tmp->value == '-' || tmp->value == '+' || tmp->value == '/' ||
            tmp->value == '%' || tmp->value == '*') &&
            (tmp->next->value == '+' || tmp->next->value == '/' ||
            tmp->next->value == '%' || tmp->next->value == '*')) {
            my_putstr (SYNTAX_ERROR_MSG);
            exit(EXIT_USAGE);
        }
}

void check_if_calcul(char *expr)
{
    int check = 0;
    for (int i = 0; expr[i] != '\0'; i++)
        if (expr[i] == '%' || expr[i] == '-' ||
            expr[i] == '+' || expr[i] == '*' || expr[i] == '/') { check++; }
    if ((expr[0] == '%' || expr[0] == '+') && check != 1) {
        my_putstr (SYNTAX_ERROR_MSG);
        exit(EXIT_USAGE);
    }
    if ((expr[0] == '*' || expr[0] == '/') && check != 1) {
        my_putstr (SYNTAX_ERROR_MSG);
        exit(EXIT_USAGE);
    }
    if (expr[my_strlen(expr)-1] == '-' || expr[my_strlen(expr)-1] == '+' ||
        expr[my_strlen(expr)-1] == '/' || expr[my_strlen(expr)-1] == '%' ||
        expr[my_strlen(expr)-1] == '*') {
        my_putstr (SYNTAX_ERROR_MSG);
        exit(EXIT_USAGE);
    }
}

void check_regroup(char *expr, char *base, char *ops)
{
    unmatched_parenthesis(expr);
    check_if_calcul(expr);
    check_if_char(expr, base, ops);
}
