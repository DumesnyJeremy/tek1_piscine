/*
** EPITECH PROJECT, 2019
** eval_expre.c
** File description:
** free
*/

#include <my.h>

void free_strtab(char **ptr)
{
    for (int i = 0; ptr[i] != NULL; i++)
        free(ptr[i]);
    free(ptr);
}