/*
** EPITECH PROJECT, 2019
** counting_letters
** File description:
** Step 2 - Counting the number of occurences of several
*/

const char *check_language(char *str)
{
    if (my_strstr(str, " je ") == 1 || my_strstr(str, " un ") == 1 ||
        my_strstr(str, " il ") == 1 || my_strstr(str, " le ") == 1 ||
        my_strstr(str, " car ") == 1 || my_strstr(str, " pour ") == 1 ||
        my_strstr(str, " etre ") == 1 || my_strstr(str, " faire ") == 1 ||
        my_strstr(str, " et ") == 1 || my_strstr(str, " est ") == 1)
        return ("French");
    else if (my_strstr(str, " I ") == 1 || my_strstr(str, " you ") == 1 ||
        my_strstr(str, " are ") == 1 || my_strstr(str, " is ") == 1 ||
        my_strstr(str, " for ") == 1 || my_strstr(str, " the ") == 1 ||
        my_strstr(str, " my ") == 1 || my_strstr(str, " why ") == 1 ||
        my_strstr(str, " like ") == 1 || my_strstr(str, " end ") == 1)
        return ("English");
    else if (my_strstr(str, " y ") == 1 || my_strstr(str, " el ") == 1 ||
        my_strstr(str, " por ") == 1 || my_strstr(str, " para ") == 1 ||
        my_strstr(str, " los ") == 1 || my_strstr(str, " como ") == 1 ||
        my_strstr(str, " al ") == 1 || my_strstr(str, " mas ") == 1 ||
        my_strstr(str, " antes ") == 1 || my_strstr(str, " cuando ") == 1)
        return ("Spanish");
    return ("German");
}

int counting_letters(int argc, char **argv)
{
    int w = 2;

    for (w; w < argc; w++) {
        counting_letter(w, argc, argv);
        my_putchar('\n');
    }
    my_putstr("=> ");
    my_putstr(check_language(argv[1]));
    my_putchar('\n');
    return (0);
}
