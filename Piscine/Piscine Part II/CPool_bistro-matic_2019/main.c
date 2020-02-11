/*
** EPITECH PROJECT, 2019
** eval_expr
** File description:
** main
*/

#include "lib.h"
#include "bistromatic.h"

static char *get_expr(unsigned int size)
{
    char *expr;

    if (size <= 0) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_SIZE_NEG);
    }
    expr = malloc(size + 1);
    if (expr == 0) {
        my_putstr(ERROR_MSG);
        exit(EXIT_MALLOC);
    }
    if (read(0, expr, size) != size) {
        my_putstr(ERROR_MSG);
        exit(EXIT_READ);
    }
    expr[size] = 0;
    return (expr);
}

static void check_ops(char const *ops)
{
    int x = 0;
    if (my_strlen(ops) != 7) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_OPS);
    }
    for (; ops[x] != '\0'; x++) {
        if (ops[x] > 126 || ops[x] < 32) {
            my_putstr(SYNTAX_ERROR_MSG);
            exit(EXIT_OPS);
        }
        for (int y = 0; y != x; y++)
            if (ops[y] == ops[x]) {
                my_putstr(SYNTAX_ERROR_MSG);
                exit(EXIT_OPS);
            }
    }
}

static void check_base(char const *base)
{
    int x = 0;
    if (my_strlen(base) < 2) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_BASE);
    }
    for (; base[x] != '\0'; x++) {
        if (base[x] > 126 || base[x] < 32) {
            my_putstr(SYNTAX_ERROR_MSG);
            exit(EXIT_BASE);
        }
        for (int y = 0; y != x; y++)
            if (base[y] == base[x]) {
                my_putstr(SYNTAX_ERROR_MSG);
                exit(EXIT_BASE);
            }
    }
}

static void ops_in_base(char const *base, char const *ops)
{
    for (int y = 0; y != my_strlen(base); y++)
        for (int x = 0; x != my_strlen(ops); x++)
            if (ops[x] == base[y]) {
                my_putstr(SYNTAX_ERROR_MSG);
                exit(EXIT_BASE);
            }
}

int main(int ac, char **av)
{
    unsigned int size;
    char *expr;
    int weight = 0;
    int check = 0;
    int result = 0;
    if (ac != 4) { my_putstr("Usage: ");
        my_putstr(av[0]);
        my_putstr(" base ops\"()+_*/%\" exp_len");
        return (EXIT_USAGE);
    }
    check_base(av[1]);
    check_ops(av[2]);
    ops_in_base(av[1], av[2]);
    size = my_atoi(av[3]);
    expr = get_expr(size);
    check_regroup(expr, av[1], av[2]);
    no_op(expr);
    my_putnbr_base(eval_expr(expr, result, check, weight), av[1]);
    return (EXIT_SUCCESS);
}
