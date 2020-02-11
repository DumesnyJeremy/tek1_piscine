/*
** EPITECH PROJECT, 2019
** day04
** File description:
** task06
*/

void my_sort_int_array(int *array, int size)
{
    int i = 1;
    int temp;

    while (i < size) {
        if (array[i] < array[i -1])
        {
            temp = array[i - 1];
            array[i - 1] = array[i];
            array[i] = temp;
            i = 0;
        }
        i++;
    }
}
