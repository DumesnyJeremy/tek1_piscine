/*
** EPITECH PROJECT, 2019
** eval_expre
** File description:
** opration
*/

#include <my.h>
#include <evalexpr.h>

t_operato OPERATORS_FUNCS[] = {{"+", &my_add}, {"-", &my_sub},
{"/", &my_div}, {"*", &my_mul}, {"%", &my_mod}};