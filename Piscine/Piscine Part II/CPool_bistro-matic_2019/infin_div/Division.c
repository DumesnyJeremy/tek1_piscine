/*
** EPITECH PROJECT, 2019
** b
** File description:
** b
*/

#include <stdio.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

char *my_putstr(char *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++)
        my_putchar(str[i]);
    return(str);
}

int  my_strlen(char const *str)
{
    int z = 0;

    while (str[z] != '\0') {
        z++;
    }
    return (z);
}

char *longDivision(char *number, int divisor)
{
    int j = 0;
    char *ans = malloc(sizeof(char)*(my_strlen(number) + 1));
    int idx = 0;
    int temp = number[idx] - '0';
    
    while (my_strlen(number) > idx) {
        
        ans[j] = (temp / divisor) + '0';
        j++;
        temp = (temp % divisor) * 10 + number[++idx] - '0';
    }    
    my_putstr(ans);
    free(ans);
}

int main(int ac, char **av)
{
    int divisor = 2;
    longDivision(av[1], divisor);
    return (0);
}
