/*
** EPITECH PROJECT, 2019
** task06
** File description:
** 
*/

void my_print(int one, int two, int three, int four)
{
        my_putchar(one + 48);
        my_putchar(two + 48);
        my_putchar(' ');
        my_putchar(three + 48);
        my_putchar(four + 48);
        if (one != 9 || two != 8 || three != 9 || four != 9) {
            my_putchar(',');
            my_putchar(' ');
            }
}
int my_print_comb2(void)
{
    int one = 0;
    int two = 0;
    int three = 0;
    int four= 0;

        while (one < 10) {
            while (two < 10) {
                while (three < 10) {
                    for (four = two + 1 ; four < 10 ; four = four + 1) {
                        my_print(one, two, three, four);
                    }
                    three = three + 1;
                }
                two = two + 1;
                three = 0;
            }
            one = one + 1;
            two = 0;
        }
}
