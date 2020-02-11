/*
** EPITECH PROJECT, 2019
** lib.h
** File description:
** My hunter
*/

#ifndef MY_H
#define MY_H

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>

typedef struct sprite_s
{
    float x_duck;
    float x_dog;
    sfRenderWindow *window;
    sfText* text;
    sfFont* font;
    sfSprite* sprite;
    sfTexture* texture;
    sfVector2f cursor_pos;
    sfVector2f pos_shoot;
    sfIntRect rect_duck;
    sfIntRect rect_dog;
    sfVector2f pos_duck;
    sfVector2f pos_dog;
    sfEvent event;
    sfMouseButtonEvent mouse;
} sprite_t;

void anim_duck(sfClock *clock1, sfIntRect *rect_duck, sfSprite *sprite1);
void posi_duck(sfClock *clock2, sfVector2f *pos_duck, sfSprite *sprite2, float *x_duck);
void anim_dog(sfClock *clock3, sfIntRect *rect_dog, sfSprite *sprite3);
void pos_dog(sfClock *clock4, sfVector2f *pos_dog, sfSprite *sprite4, float *x_dog);

void move_rect_duck(sfIntRect *rect_duck, int offset, int max_value);
void move_duck(sfVector2f *pos_duck, float *x_duck);
void move_rect_dog(sfIntRect *rect_dog, int offset, int max_value);
void move_dog(sfVector2f *pos_dog, float *x_dog);
int hitbox(sprite_t *param_spr, int width_duck, int duck_height);
int main(void);
sprite_t *createBackgroundSprite();
sprite_t *createDuckSprite();
sprite_t *createCrossHSprite();
sprite_t *createShootRSprite();
sprite_t *createDogSprite();

sprite_t *Pos_sprite();
sprite_t *Pos_click();
sprite_t *pos_sprite_duck();
sprite_t *pos_sprite_dog();

sprite_t *destroy();
sprite_t *createtext();

#endif