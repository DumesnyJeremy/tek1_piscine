/*
** EPITECH PROJECT, 2019
** infsub
** File description:
** Infinite subtraction
*/

#include "lib.h"

char *zero_shift(op_add_t val)
{
    while (val.r[0] == '0' || (val.r[1] == '0' && val.r[0] == '\0')) {
        for (int i = 1; i < val.save; i++)
            val.r[i - 1] = val.r[i];
        val.r[val.save - 1] = '\0';
    }
    while ((val.r[1] == '0' && val.r[0] == '-')) {
        for (int i = 2; i < val.save + 1; i++)
            val.r[i - 1] = val.r[i];
        val.r[val.save] = '\0';
    }
    return (val.r);
}

op_add_t sub_loop(char *a, char *b, op_add_t val)
{
    int i = 1;
    for (; (val.max_len != 0); val.max_len--, val.len_a--, val.len_b--) {
        if (val.len_a > -1 && val.len_b < 0)
            val.result = (a[val.len_a] - '0');
        if (val.len_a > -1 && val.len_b > -1) {
            if (a[val.len_a - i] == '0' && (a[val.len_a] - b[val.len_b]) < 0) {
                for (; a[val.len_a - i] == '0'; i++)
                    a[val.len_a - i] = '9';
                a[val.len_a - i] -= 1;
            }
            if (((a[val.len_a] - '0') - (b[val.len_b] - '0')) < 0) {
                if (a[val.len_a - 1] != '9')
                    a[val.len_a - 1] -= 1;
                val.result = ((a[val.len_a] - '0') + 10) - (b[val.len_b] - '0');
            }
            else val.result = (a[val.len_a] - '0') - (b[val.len_b] - '0');
        }
        val.r[val.max_len - 1] = val.result + '0';
    }
    return (val);
}

char *sign_zero_shift(char *a, char *b, op_add_t val, int swap)
{
    if ((a[-1] == '-' && swap != 1) || (b[-1] == 0 && swap == 1)) {
        for (; val.save_shift > 0; val.save_shift--)
            val.r[val.save_shift] = val.r[val.save_shift - 1];
        val.r[0] = '-';
    }
    zero_shift(val);
    return (val.r);
}

char *sub(char *a, char *b, int swap)
{
    op_add_t val;
    val.len_a = my_strlen(a) - 1;
    val.len_b = my_strlen(b) - 1;
    if (a[0] == '-') { a++, val.len_a--; }
    if (b[0] == '-') { b++, val.len_b--; }
    if (my_strcmp(a, b) == 0) {
        val.r = malloc(sizeof(char) * 2);
        val.r[0] = '0';
        return (val.r); }
    if (my_strcmp(a, b) >= 0) val.max_len = val.len_a + 1;
    else { my_swap_sub(&a, &b);
        swap = val.len_a;
        val.len_a = val.len_b;
        val.len_b = swap;
        val.max_len = val.len_a + 1;
        swap = 1; }
    val.save_shift = val.max_len;
    val.save = val.max_len;
    val.r = malloc(sizeof(char) * val.max_len + 2);
    sub_loop(a, b, val);
    sign_zero_shift(a, b, val, swap);
    return (val.r);
}
