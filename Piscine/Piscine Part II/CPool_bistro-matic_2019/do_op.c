/*
** EPITECH PROJECT, 2019
** do_op.c
** File description:
** Computes an operation
*/

#include "lib.h"
#include "bistromatic.h"

int do_op_bis(int a, int b, int op, int result)
{
    if (op == '/') {
        if (b == 0) {
            my_putstr(ERROR_MSG);
            exit(EXIT_USAGE);
        }
        return (result = a / b);
    }
    if (op == '%') {
        if (b == 0) {
            my_putstr(ERROR_MSG);
            exit(EXIT_USAGE);
        }
        return (result = a % b);
    }
    return (0);
}

int do_op(int a, int op, int b)
{
    int result = 0;
    if (op == '-')
        return (result = a - b);
    if (op == '+')
        return (result = a + b);
    if (op == '*')
        return (result = a * b);
    return (do_op_bis(a, b, op, result));
}
