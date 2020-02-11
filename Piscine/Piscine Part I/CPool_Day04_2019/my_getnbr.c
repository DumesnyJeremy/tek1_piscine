/*
** EPITECH PROJECT, 2019
** getnum
** File description:
** oui
*/

int my_getnbr(char const *str)
{
    int c = my_strlen;
    int nb = 0;
    int a = 0;
    int i;
    for (i= 0; str[i] == '-' || str[i] == '+'; i++) {
        if (str[i] == '-')
            a++;
    }
    for (; str[i] != '\0';) {
        if(str[i] < 48 || str[i] > 57)
            return ( nb / 10);
        nb += (str[i] - 48);
        nb = nb * 10;
        i++;
            }
    nb = nb / 10;
    if (c > 10)
        return (0);
    if ((a % 2) == 0)
        return(nb);
    else if ((a % 2) != 0)
        return(-nb);
}
