/*
** EPITECH PROJECT, 2019
** Task01 
** File description:
** creates a new list from the command line arguments
*/

#include <mylist.h>

typedef struct lined_list
{
    void *data;
    struct linked_list *next;
}linked_list_t;

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    int i;
    int a = ac - 1;

    linked_list_t *list = malloc(sizeof(linked_list_t));
    while (i > 0) {
        list->data 
            a--;
    }
}

int main(void)
{
    return (0);
}
