/*
** EPITECH PROJECT, 2019
** My_hunter
** File description:
** clock
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include "../include/my_hunter.h"

void anim_duck(sfClock *clock1, sfIntRect *rect_duck, sfSprite *sprite1)
{
    sfTime time1;
    float seconds;
    time1 = sfClock_getElapsedTime(clock1);
    seconds = time1.microseconds / 1000000.0;

    if (seconds > 0.09)
    {
        move_rect_duck(rect_duck, 110, 330);
        sfSprite_setTextureRect(sprite1, *rect_duck);
        sfClock_restart(clock1);
    }
}

void posi_duck(sfClock *clock2, sfVector2f *pos_duck, sfSprite *sprite2, float *x_duck)
{
    sfTime time2;
    float seconds;
    time2 = sfClock_getElapsedTime(clock2);
    seconds = time2.microseconds / 1000000.0;

    if (seconds > 0.003) {
        move_duck(pos_duck, x_duck);
        sfSprite_setPosition(sprite2, *pos_duck);
        sfClock_restart(clock2);
    }
}

void anim_dog(sfClock *clock3, sfIntRect *rect_dog, sfSprite *sprite3)
{
    sfTime time3;
    float seconds;
    time3 = sfClock_getElapsedTime(clock3);
    seconds = time3.microseconds / 1000000.0;

    if (seconds > 0.09) {
        move_rect_dog(rect_dog, 110, 330);
        sfSprite_setTextureRect(sprite3, *rect_dog);
        sfClock_restart(clock3);
    }
}

void posi_dog(sfClock *clock4, sfVector2f *pos_dog, sfSprite *sprite4, float *x_dog)
{
    sfTime time2;
    float seconds;
    time2 = sfClock_getElapsedTime(clock4);
    seconds = time2.microseconds / 1000000.0;

    if (seconds > 0.02) {
        move_dog(pos_dog, x_dog);
        sfSprite_setPosition(sprite4, *pos_dog);
        sfClock_restart(clock4);
    }
}