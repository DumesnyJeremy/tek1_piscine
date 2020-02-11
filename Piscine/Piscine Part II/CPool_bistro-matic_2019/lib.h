/*
** EPITECH PROJECT, 2019
** lib.h
** File description:
** evalexpr header
*/

#ifndef LIB_H
#define LIB_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef enum
{
    false,
    true
} bool;

typedef struct dlist_node_s
{
    int is_calcul;
    int is_op;
    int weight;
    int value;
    int check;
    int found;
    struct dlist_node_s *back;
    struct dlist_node_s *next;
} dlist_node_t, node_t;

typedef struct dlist_s
{
    int length;
    struct dlist_node_s *begin;
    struct dlist_node_s *end;
} dlist_t;

typedef struct calcul_s
{
    int weight;
    int a;
    int op;
    int b;
    int result;
    struct dlist_node_s *head;
    struct dlist_node_s *tail;
} calcul_t;

void check_if_char(char *expr, char *base, char *ops);
void if_check_double(dlist_t *mylist);
void unmatched_parenthesis(char *expr);
int my_atoi(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
int eval_expr5(int check, dlist_t *mylist, char *tab, int j);
void check_if_calcul(char *expr);
void last_check(dlist_t *li);
dlist_node_t *calcul_node3(calcul_t *calcul, node_t *tmp, int *ptr, int op);
node_t *calcul_node2(calcul_t *calcul, int *f_calcul, int op, node_t *max);
void calcul_node4(calcul_t *calcul, node_t *tmp, node_t *max, int *ptr);
void op_priority3(node_t *save, node_t *to_find, int checkn);
int eval_expr4(dlist_t *mylist, int first_op, int *first_calcul);
void eval_expr2(char const *str, dlist_t *li, int *first_calcul);
void eval_expr3(char *tab, dlist_t *mylist, int check, int *first_calcul);
int search_max_weight(dlist_t *li);
dlist_t *new_list(void);
bool is_empty_list(dlist_t *li);
int eval_expr(char const *str, int result, int weight, int check);
dlist_t *push_back_list(dlist_t *li, int x, int y);
dlist_t *pop_front_list(dlist_t *li);
void print_list(dlist_t *li);
dlist_t *clear_list(dlist_t *li);
dlist_node_t *search_list_op(dlist_t *li, int to_find);
void op_priority(dlist_node_t *to_find);
dlist_node_t *search_first_max(dlist_t *li, int to_find);
int do_op(int a, int op, int b);
calcul_t *calcul_node(int *first_calcul, dlist_node_t *first_max);
dlist_t *new_node(calcul_t *result, dlist_t *li);
calcul_t *new_calcul_t(void);
dlist_node_t *new_dlist_node(int x, int y);
dlist_t *push_back_list_op(dlist_t *li, int x, int y);
dlist_t *push_back_list_plusneg(dlist_t *li, int x, int y);
dlist_t *pop_back_list(dlist_t *li);
dlist_t *push_front_list(dlist_t *li, int x);
int my_put_nbr(int nb);
int my_putstr(char const *str);
void my_putchar(char c);
void op_priority2(dlist_node_t *save, dlist_node_t *to_find);
void print_list_weight(dlist_t *li);
void check_regroup(char *expr, char *base, char *ops);
int search_low_weight(dlist_t *li);
int my_putnbr_base(int nbr, char const *base);
void no_op(char *expr);

#endif
