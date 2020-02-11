/*
** EPITECH PROJECT, 2019
** eval_expre
** File description:
** calcul in postfix
*/

#include <my.h>
#include <evalexpr.h>
#include <op.h>

void free_ptr(eval_expr_t *cal)
{
    free(cal->output);
    free_strtab(cal->tab);
    free(cal->stok);
    free(cal);
}

void push(eval_expr_t *cal, int num)
{
    cal->stok[++cal->val_s] = num;
}

int pop(eval_expr_t *cal)
{
    return (cal->stok[cal->val_s--]);
}

int postfix_calcul(eval_expr_t *cal)
{
    int num_1 = 0, num_2 = 0, num_3 = 0;
    cal->stok = malloc(sizeof(int) * (my_strlentab(cal->output)));
    cal->val_s = -1;

    for (int i  = 0; cal->output[i] != NULL; i++) {
        if (check_negative(cal->output[i]) != -1)
            push(cal, my_getnbr_to_int(cal->output[i]));
        else {
            num_1 = pop(cal);
            num_2 = pop(cal);
            for (int j = 0; j < 5; j++)
                if (cal->output[i][0] == OPERATORS_FUNCS[j].op[0])
                    num_3 = OPERATORS_FUNCS[j].operation(num_2, num_1);
            push(cal, num_3);
        }
    }
    num_3 = pop(cal);
    free_ptr(cal);
    return (num_3);
}
