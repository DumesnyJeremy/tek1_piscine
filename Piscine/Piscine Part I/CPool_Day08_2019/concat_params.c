/*
** EPITECH PROJECT, 2019
** task02
** File description:
** oui
*/

int strlene(char *str)
{
    int count = 0;

    while (str[count] != '\0')
        count++;
    return (count);
}

char *concat_params(int argc, char **argv)
{
    int i = 0, j = 0, k = 0, length = 0;
    char *str;
    while (j < argc) {
        length += strlene(argv[j]) + 1;
        j++; }
    str = malloc(sizeof(char) * (length));
    j = 0;
    while (i < argc) {
        while (argv[i][j] != '\0') {
            str[k] = argv[i][j];
            k++;
            j++;
        }
        j = 0;
        str[k] = '\n';
        k++;
        i++;
    }
    str[length - 1] = '\0';
    return (str);
}
