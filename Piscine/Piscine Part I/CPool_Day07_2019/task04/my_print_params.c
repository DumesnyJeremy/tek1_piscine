/*
** EPITECH PROJECT, 2019
** task04
** File description:
** day07
*/

int main(int argc, char **argv)
{
    int i = 0;

    while (argc > i) {
        my_putstr(argv[i]);
        my_putchar('\n');
        i++;
    }
    argc--;
}

