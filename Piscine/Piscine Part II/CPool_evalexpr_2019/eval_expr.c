/*
** EPITECH PROJECT, 2019
** eval_expr
** File description:
** eval_expr
*/

#include <my.h>
#include <evalexpr.h>

int op_oprator(char const c)
{
    switch (c) {
        case '*':  case '/': case '%':
            return 2;
        case '+': case '-':
            return 1;
    }
    return (0);
}

void add_op(eval_expr_t *cal, char c)
{
    if (IS_OPRATOR(c)) {
        if (cal->val_s == 0) {
            cal->stack[cal->val_s++] = c;
            cal->stack[cal->val_s] = '\0';
        } else {
            for (; cal->val_s > 0 && op_oprator(c)
            <= op_oprator(cal->stack[cal->val_s - 1]);)
                cal->output[cal->val_o++] =
                my_strndup(&cal->stack[--cal->val_s], 1);
            cal->stack[cal->val_s++] = c;
            cal->stack[cal->val_s] = '\0';
        }
    }
}

int ruls(eval_expr_t *cal, char c)
{
    add_op(cal, c);
    if (c == '(') {
        cal->stack[cal->val_s++] = c;
        cal->stack[cal->val_s] = '\0';
    }
    if (c == ')') {
        for (; cal->val_s != 0 && cal->stack[--cal->val_s] != '(';) {
            cal->output[cal->val_o++] = my_strndup(&cal->stack[cal->val_s], 1);
            cal->stack[cal->val_s] = '\0';
            continue;
        }
        cal->stack[cal->val_s] = '\0';
    }
    if (c == '0' && cal->val_s - 1 >= 0) {
        while (cal->val_s - 1 >= 0) {
            cal->output[cal->val_o++] =
            my_strndup(&cal->stack[--cal->val_s], 1);
        }
    }
    return (0);
}

int eval_expr(char const *str)
{
    eval_expr_t *cal = malloc(sizeof(eval_expr_t));
    cal->tab = opration_to_tab(str);
    cal->output =  malloc(sizeof(char *) * (my_strlentab(cal->tab) + 1));
    cal->stack =  malloc(sizeof(char) * (my_strlen(str)));
    cal->val_s = 0;
    cal->val_o = 0;

    for (int i = 0; cal->tab[i] != NULL; i++) {
        if (check_negative(cal->tab[i]) != -1) {
            cal->output[cal->val_o++] = cal->tab[i];
            cal->output[cal->val_o] = '\0';
            continue;
        }
        ruls(cal, cal->tab[i][0]);
    }
    ruls(cal, '0');
    free(cal->stack);
    cal->output[cal->val_o] = NULL;
    return (postfix_calcul(cal));
}
