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

void lines(int x, int y)
{
    write(1, "o", 1);
    int j;
    x = x - 2;
    for(j = 1; j <= x; j++)
        write(1, "-", 1);
    if(x > 1) {
    write(1, "o", 1);
    }
    write(1, "\n", 1);
}

void columns(int x, int y)
{
    write(1, "|", 1);
    int j;
    x = x - 2;
    for(j = 1; j <= x; j++)
        write(1, " ", 1);
    if(x > 1) {
    write(1, "|", 1);
    }
    write(1, "\n", 1);
}

void rush(int x, int y)
{
    int nb_line = 2;
    if (x <= 0 || y <= 0)
        return (check_error(x, y));
    lines(x, y);
    if (y > 1) {
        while(nb_line < y) {
            columns(x, y);
            nb_line++;
        }
        lines(x, y);
    }
}

int main(void)
{
    rush(5, 5);
    return (0);
}
