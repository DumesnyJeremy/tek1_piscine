/*
** EPITECH PROJECT, 2019
** task03
** File description:
** oui
*/

int my_show_word_array(char * const *tab)
{
    int i = 0;

    for (; tab[i] != '\0';) {
        my_putstr(tab[i]);
        my_putchar('\n');
        i += 1;
    }
    return (0);
}
