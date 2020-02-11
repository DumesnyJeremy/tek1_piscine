/*
** EPITECH PROJECT, 2019
** infadd
** File description:
** Infinite addition
*/

#include "lib.h"

char *sign(char *a, char *b, op_add_t val)
{
    if (a[0] == '-' && b[0] == '-')
        val.r[0] = '-';
    return (val.r);
}

op_add_t add_neg_loop(char *a, char *b, op_add_t val)
{
    int carry = 0;
    for (; (val.max_len != 1); val.max_len--, val.len_a--, val.len_b--) {
        if (val.len_a > 0 && val.len_b < 1)
            val.result = (a[val.len_a] - '0') + carry;
        else if (val.len_a < 1 && val.len_b > 0)
            val.result = (b[val.len_b] - '0') + carry;
        else if (val.len_a > 0 && val.len_b > 0)
            val.result = (a[val.len_a] - '0') + (b[val.len_b] - '0') + carry;
        else
            val.result = carry;
        if (val.result > 9) {
            val.result = val.result - 10;
            carry = 1;
        }
        else
            carry = 0;
        val.r[val.max_len - 1] = val.result + '0';
    }
    return (val);
}

op_add_t add_loop(char *a, char *b, op_add_t val)
{
    int carry = 0;
    for (; (val.max_len != 0); val.max_len--, val.len_a--, val.len_b--) {
        if (val.len_a > -1 && val.len_b < 0)
            val.result = (a[val.len_a] - '0') + carry;
        else if (val.len_a < 0 && val.len_b > -1)
            val.result = (b[val.len_b] - '0') + carry;
        else if (val.len_a > -1 && val.len_b > -1)
            val.result = (a[val.len_a] - '0') + (b[val.len_b] - '0') + carry;
        else
            val.result = carry;
        if (val.result > 9) {
            val.result = val.result - 10;
            carry = 1;
        }
        else
            carry = 0;
        val.r[val.max_len - 1] = val.result + '0';
    }
    return (val);
}

char *add(char *a, char *b)
{
    op_add_t val;
    val.len_a = my_strlen(a) - 1;
    val.len_b = my_strlen(b) - 1;
    if (val.len_a > val.len_b)
        val.max_len = val.len_a + 2;
    else val.max_len = val.len_b + 2;
    val.save_shift = val.max_len;
    val.save = val.max_len;
    val.r = malloc(sizeof(char) * val.max_len + 1);
    if (a[0] == '-' && b[0] == '-') add_neg_loop(a, b, val);
    else add_loop(a, b, val);
    if (val.r[0] == '0' || (val.r[1] == '0' && val.r[0] == '\0')) {
        for (int i = 1; i < val.save; i++)
            val.r[i - 1] = val.r[i];
        val.r[val.save - 1] = '\0';
    }
    sign(a, b, val);
    if (val.r[0] == '-' && my_strlen(val.r) == 1)
        val.r[0] = '\0';
    return (val.r);
}
