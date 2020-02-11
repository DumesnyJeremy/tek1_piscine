/*
** EPITECH PROJECT, 2019
** csflm
** File description:
** oui
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/my_hunter.h"

sprite_t *destroy()
{
    sprite_t *S = malloc(sizeof(sprite_t));
    sfRenderWindow *window;
    sprite_t *dog;
    sprite_t *crossH;
    sprite_t *duck;
    sprite_t *background;
    sfRenderWindow_destroy(window);
    sfSprite_destroy(background->sprite);
    sfSprite_destroy(duck->sprite);
    sfSprite_destroy(crossH->sprite);
    sfSprite_destroy(dog->sprite);
}

sprite_t *createtext()
{
    sprite_t *S = malloc(sizeof(sprite_t));
    sfFont* font;
    sfText* text;
    S->font = sfFont_createFromFile("Sprite/04b_25.ttf");
    if (!S->font)
        return EXIT_FAILURE;
    S->text = sfText_create();
    sfText_setString(S->text, "Your score is :");
    sfText_setFont(S->text, S->font);
    sfText_setCharacterSize(S->text, 50);
    return (S);
}

sprite_t *pos_sprite_duck()
{
    sprite_t *PS = malloc(sizeof(sprite_t));
    srand(time(NULL));
    int y = rand() % 800;

    PS->x_duck = -110;
    PS->cursor_pos;
    PS->pos_duck.x = PS->x_duck;
    PS->pos_duck.y = y;
    PS->rect_duck.top = 0;
    PS->rect_duck.left = 0;
    PS->rect_duck.width = 110;
    PS->rect_duck.height = 110;
    return (PS);
}

sprite_t *pos_sprite_dog()
{
    sprite_t *PSD = malloc(sizeof(sprite_t));
    PSD->x_dog = -110;
    PSD->pos_dog.x = PSD->x_dog;
    PSD->pos_dog.y = 900;
    PSD->rect_dog.top = 0;
    PSD->rect_dog.left = 0;
    PSD->rect_dog.width = 110;
    PSD->rect_dog.height = 110;
    return (PSD);
}

int hitbox(sprite_t *param_spr, int width_duck, int duck_height)
{
    if ((param_spr->cursor_pos.x >= param_spr->pos_duck.x
    && param_spr->cursor_pos.x <= param_spr->pos_duck.x + width_duck)
    && (param_spr->cursor_pos.y >= param_spr->pos_duck.y
    && param_spr->cursor_pos.y <= param_spr->pos_duck.y + duck_height)) {
        return (1);
    }
    else
        return (0);
}