/*
** EPITECH PROJECT, 2019
** mylist
** File description:
** list_link
*/

#ifndef MYLIST_H_
#define MYLIST_H_

typedef struct linked_list
{
    void *data;
    struct linked_list *next;
} linked_list_t;

int my_list_size(linked_list_t const *begin);
void my_rev_list(linked_list_t **begin);
void my_delete_nodes(linked_list_t **begin, void const *data_ref, int(*cmp)());
linked_list_t *my_params_to_list(int ac, char *const *av);
linked_list_t *my_find_node(linked_list_t *begin, void *const *data_ref,
int (*cmp)());
int my_apply_on_matching_nodes(linked_list_t *begin, int(*f)(void *),
void const *data_ref, int (*cmp)());

#endif
