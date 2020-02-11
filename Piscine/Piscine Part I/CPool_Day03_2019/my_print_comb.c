/*
** EPITECH PROJECT, 2019
** task05
** File description:
** print comb
*/

int my_print_comb(void)
{
    int a = 0;
    int b = 1;
    int c = 2;
    while(a <= 7 && a < b)
    {
        while(b <= 8)
        {
            while(c <= 9)
            {
                my_putchar(a + 48);
                my_putchar(b + 48);
                my_putchar(c + 48);
                if(a!=7 || b!=8 || c!=9){
                    my_putchar(',');
                    my_putchar(' ');
                }
                c++;
            }
            b++;
            c = b + 1;
        }
        a++;
        b = a + 1;
        c = a + 2;
    }
}
