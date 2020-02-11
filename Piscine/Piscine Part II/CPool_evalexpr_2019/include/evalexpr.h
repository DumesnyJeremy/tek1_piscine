/*
** EPITECH PROJECT, 2019
** infinadd
** File description:
** infinadd
*/

#pragma once

int eval_expr(char const *str);

int my_add(int num_1 , int num_2);
int my_sub(int num_1 , int num_2);
int my_div(int num_1 , int num_2);
int my_mul(int num_1 , int num_2);
int my_mod(int num_1 , int num_2);
int my_usage(int num_1, int num_2);
typedef struct s_operato {
    char *op;
    int (*operation)(int num_1, int num_2);
} t_operato;
typedef struct evalexpr_s
{
    char **tab;
    char **output;
    char *stack;
    int *stok;
    int val_s;
    int val_o;
} eval_expr_t;

int pop(eval_expr_t *cal);
int eval_expr(char const *str);
void push(eval_expr_t *cal, int num);
int postfix_calcul(eval_expr_t *cal);
char **opration_to_tab(char const *opt);

#define IS_OPRATOR(c)   (c == '+' || c == '-' || c == '/'|| c == '*'\
|| c == '%')
#define IS_OPRATOR2(c)   (c == '+' || c == '-' || c == '/'|| c == '*'\
|| c == '%' || c == '(' || c == ')')
#define IS_OPRATION(c)   ((c >= '0' && c <= '9') || c == '(' || c == ')')
#define	LONG_LEN(len1, len2) len1 >= len2 ? len1 : len2;
