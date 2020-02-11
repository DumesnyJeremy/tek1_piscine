/*
** EPITECH PROJECT, 2019
** infini add
** File description:
** infinite addition
*/

#include <stdlib.h>
#include "../include/my.h"

char *infin_mult(char *nbr1, char *nbr2)
{
    struct s_def m;

    m.len_1 = my_strlen(nbr1) - 1;
    m.len_2 = my_strlen(nbr2) - 1;
    m.nbr1 = nbr1;
    m.nbr2 = nbr2;
    m.compt = 0;
    m.save = 0;
    m.tempo = 0;

    m = loop_calculation(m);
    my_revstr(m.resF);
    my_putstr(m.resF);
    free(m.resF);
}

struct s_def loop_calculation(struct s_def M)
{
    M.resF = NULL;
    M.resT = 0;
    M.i = 1;
    while (M.len_1 >= 0 && M.len_2 >= 0)
    {
        M.resT = malloc(sizeof(char) * (M.len_1 + M.i) + 1);
        M.tempo = M.save + (M.len_1 >= 0 ? M.nbr1[M.len_1] - '0': 0)
        * (M.len_2 >= 0 ? M.nbr2[M.len_2] - '0': 0);
        M.save = M.tempo / 10;
        M.resT[M.compt] = M.tempo % 10 + '0';
        M.resT[M.compt + 1] = '\0';
            if (M.len_1 == 0)
            {
            M.len_1 = my_strlen(M.nbr1);
            M.len_2--;
            }
        M.len_1--;
        M.compt++;
        M.i++;
        M = loop_add_res(M);

        M.resF[M.compt] = M.save + '0';
        M.resF[M.compt + 1] = '\0';
//            if (M.resF[M.compt] == '0')
//            M.resF[M.compt] = '\0';
    }
    return (M);
}

struct s_def loop_add_res(struct s_def a)
{
    if (a.resF != NULL) {
        a.resF = infin_add(a.resF, a.resT);
    } else {
        a.resF = infin_add("0", a.resT);
    }
    free(a.resT);
    return (a);
}