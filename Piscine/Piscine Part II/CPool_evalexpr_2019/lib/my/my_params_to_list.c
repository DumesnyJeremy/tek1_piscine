/*
** EPITECH PROJECT, 2019
** my_params_to_list
** File description:
** my_params_to_list
*/

#include "my.h"
#include "mylist.h"

linked_list_t *my_params_to_list(int ac, char *const *av)
{
    linked_list_t *head = NULL;
    linked_list_t *node;

    for (int i = 0; i < ac; i++) {
        node = malloc(sizeof(linked_list_t));
        node->data = my_strdup(av[i]);
        node->next = head;
        head = node;
    }
    return (head);
}
