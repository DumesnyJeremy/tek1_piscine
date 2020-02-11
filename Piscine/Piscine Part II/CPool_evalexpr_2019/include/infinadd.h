/*
** EPITECH PROJECT, 2019
** infinadd
** File description:
** infinadd
*/

#pragma once

char *infinadd(char *s1, char *s2, char const *base, int n);
char *infinsub(char *s1, char *s2, char const *base, int n);
char int_to_digit(int n, char const *base);
int digit_to_int(char c, char const *base);
char int_to_digit(int n, char const *base);
int compre_num_size(char *s1, char *s2, char const *base);
int compre_num_base(char *s1, char *s2, char const *base);
#define	LONG_LEN(len1, len2) len1 >= len2 ? len1 : len2;