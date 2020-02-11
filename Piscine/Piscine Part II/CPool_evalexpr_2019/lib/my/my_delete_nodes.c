/*
** EPITECH PROJECT, 2019
** my_delete_nodes
** File description:
** delete data in linked_list
*/

#include "my.h"
#include "mylist.h"

void my_delete_nodes(linked_list_t **begin, void const *data_ref, int(*cmp)())
{
    linked_list_t *tmp = (*begin);
    linked_list_t *prev = NULL;

    for (; tmp != NULL && (cmp)(data_ref, tmp->data) == 0; tmp = tmp->next) {
        (*begin) = tmp->next;
        free(tmp);
        tmp = (*begin);
    }
    for (; tmp != NULL; tmp = tmp->next) {
        while (tmp != NULL && (cmp)(data_ref, tmp->data) != 0) {
            prev = tmp;
            tmp = tmp->next;
        }
        if (tmp == NULL) return;
        prev->next = tmp->next;
        free(tmp);
        tmp = prev->next;
    }
}
