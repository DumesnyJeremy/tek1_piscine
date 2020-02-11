/*
** EPITECH PROJECT, 2019
** counting_letter
** File description:
** Step 1 - Counting the number of occurences of a letter
*/

void print_percent(int counter, char *str)
{
    int freq;
    int freq_g;
    int freq_d;
    int freq_dg;
    int freq_dd;

    my_putchar(':');
    my_put_nbr(counter);
    my_putstr(" (");
    freq = (counter * 10000) / my_strlen_carac(str);
    freq_g = freq / 100;
    freq_d = freq % 100;
    freq_dg = freq_d / 10;
    freq_dd = freq_d % 10;
    my_put_nbr(freq_g);
    my_putchar('.');
    my_put_nbr(freq_dg);
    my_put_nbr(freq_dd);
    my_putstr("%)");
}

int counting_letter(int w, int argc, char **argv)
{
    int counter = 0;

    if (argv[w][0] >= 'A' && argv[w][0] <= 'Z')
        my_strupcase(argv[1]);
    else if (argv[w][0] >= 'a' && argv[w][0] <= 'z')
        my_strlowcase(argv[1]);
    for (int i = 0; argv[1][i] != '\0'; i++) {
        if (argv[1][i] == argv[w][0])
            counter++;
    }
    my_putchar(argv[w][0]);
    print_percent(counter, argv[1]);
    return (0);
}
