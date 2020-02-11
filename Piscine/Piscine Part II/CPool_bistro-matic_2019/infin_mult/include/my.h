/*
** EPITECH PROJECT, 2019
** h
** File description:
** h
*/

#ifndef MY_H_
#define MY_H_

int my_strlen(char const *str);
char *my_revstr(char *str);
int my_putstr(char const *str);
void my_putchar(char c);
char *infin_add(char *nbr1, char *nbr2);
char *infin_mult(char *nbr1, char *nbr2);
struct s_def loop_calculation(struct s_def M);
struct s_def loop_add_res(struct s_def a);


struct add_def
{
    int i;
    int j;
    int save;
    int tempo;
    char *res;
    int k;
    char *nbr1;
    char *nbr2;
};

struct s_def
{
    int len_1;
    int len_2;
    int i;
    int compt;
    char *resF;
    char *resT;
    char *nbr1;
    char *nbr2;
    int save;
    int tempo;
};

#endif