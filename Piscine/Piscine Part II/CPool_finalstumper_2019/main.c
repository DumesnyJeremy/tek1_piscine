/*
** EPITECH PROJECT, 2019
** main final_stumper
** File description:
** rush3
*/

#include <unistd.h>
#include "rush3.h"

int main(void)
{
    char buff[BUFF_SIZE + 1];
    int offset = 0;
    int len;

    while ((len = read(0, buff + offset, BUFF_SIZE - offset)) > 0) {
        offset = offset + len;
    }
    buff[offset] = '\0';
    if (len < 0)
        return (84);
    rush3(buff);
    return (0);
}
