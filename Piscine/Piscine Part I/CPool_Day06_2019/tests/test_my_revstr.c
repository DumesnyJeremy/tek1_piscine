/*
** EPITECH PROJECT, 2019
** test task04
** File description:
** oui
*/

#include <criterion/criterion.h>

Test(my_revstr, reverse_characters_of_string)
{
    char str [6] = "Hello\0";

    my_revstr(str);
    cr_assert_str_eq(str, "olleH\0");
}
