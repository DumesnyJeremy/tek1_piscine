/*
** EPITECH PROJECT, 2019
** My_hunter
** File description:
** move pixel
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include "../include/my_hunter.h"

void move_rect_duck(sfIntRect *rect_duck, int offset, int max_value)
{
    rect_duck->left += offset;
    if ( rect_duck->left >= max_value)
        rect_duck->left = 0;
}

void move_duck(sfVector2f *pos_duck, float *x_duck)
{
    if (*x_duck < 1920) {
        *pos_duck = (sfVector2f){*x_duck, pos_duck->y};
        *x_duck += 4.0;
    }
    if (*x_duck >= 1920) {
        *pos_duck = (sfVector2f){-110, pos_duck->y};
        *x_duck = -110;
        pos_duck->y = rand()%800;
    }
}

void move_rect_dog(sfIntRect *rect_dog, int offset, int max_value)
{
    rect_dog->left += offset;
    if ( rect_dog->left >= max_value)
        rect_dog->left = 0;
}

void move_dog(sfVector2f *pos_dog, float *x_dog)
{
    if (*x_dog < 1920) {
        *pos_dog = (sfVector2f){*x_dog, pos_dog->y};
        *x_dog += 4.0;
        pos_dog->y = 900;
    }
    if (*x_dog >= 1920) {
        *pos_dog = (sfVector2f){-110, pos_dog->y};
        *x_dog = -110;
        pos_dog->y = 900;
    }
}