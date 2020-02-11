/*
** EPITECH PROJECT, 2019
** abs
** File description:
** abs
*/

int my_char_isnumabs(char const c)
{
    if ((c >= '0' && c <= '9') || (c == '-') || (c == '+'))
        return (1);
    else
        return (0);
}