/*
** EPITECH PROJECT, 2019
** task05
** File description:
** oui
*/

int main(int argc, char **argv)
{
    int i = argc -1;

    for (; i > 0;) {
        my_putstr(argv[i]);
        my_putchar('\n');
        i--;
    }
}
