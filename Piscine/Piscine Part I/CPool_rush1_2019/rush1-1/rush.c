/*
** EPITECH PROJECT, 2019
** rush1-1
** File description:
** display square
*/

void check_error(int x, int y)
{
    write(2, "Invalid size\n", 14);
    return ;
}

void extendfunctionlines(int x)
{
    if (x == 1 || x < 1 || x > 1) {
        if (x == 1 || x > 1) {
            write(1, "o", 1);
            return ;
        } else {
            write(1, "o", 1);
        }
    }
}

void lines(int x, int y)
{
    if (x == 1){
        write(1, "o", 1);
        int j;
        x = x - 2;
        for (j = 1; j <= x; j++) {
            write(1, "-", 1);
        }
        write(1, "\n", 1);
    } else {
        write(1, "o", 1);
        int j;
        x = x - 2;
        for (j = 1; j <= x; j++) {
            write(1, "-", 1);
        }
        extendfunctionlines(x);
        write(1, "\n", 1);
    }
}

void columns(int x, int y)
{
    if (x == 1) {
        write(1, "|", 1);
        int j;
        x = x - 2;
        for (j = 1; j <= x; j++)
            write(1, " ", 1);
        write(1, "\n", 1);
    } else {
        write(1, "|", 1);
        int j;
        x = x - 2;
        for (j = 1; j <= x; j++)
            write(1, " ", 1);
        if (x == 1 || x > 1 || x < 1) {
            write(1, "|", 1);
        }
        write(1, "\n", 1);
    }
}

void rush(int x, int y)
{
    int nb_line = 2;
    if (x <= 0 || y <= 0)
        return (check_error(x, y));
    lines(x, y);
    if (y > 1) {
        while (nb_line < y) {
            columns(x, y);
            nb_line++;
        }
        lines(x, y);
    }
}
