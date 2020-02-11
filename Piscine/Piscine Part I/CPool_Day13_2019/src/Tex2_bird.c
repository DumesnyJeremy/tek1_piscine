/*
** EPITECH PROJECT, 2019
** Texture all Srpite
** File description:
** Texture 1/2/3
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include "../include/my_hunter.h"

sprite_t *createBackgroundSprite()
{
    sprite_t *S = malloc(sizeof(sprite_t));
    S->texture = sfTexture_createFromFile("Sprite/Background-sky.jpg", NULL);
    if (!S->texture)
        return NULL;
    S->sprite = sfSprite_create();
    sfSprite_setTexture(S->sprite, S->texture, sfTrue);
    return (S);
}

sprite_t *createDuckSprite()
{
    sprite_t *S = malloc(sizeof(sprite_t));
    S->texture = sfTexture_createFromFile("Sprite/duck.png", NULL);
    if (!S->texture)
        return NULL;
    S->sprite = sfSprite_create();
    sfSprite_setTexture(S->sprite, S->texture, sfTrue);
    return (S);
}

sprite_t *createCrossHSprite(sfRenderWindow *window)
{
    sprite_t *S = malloc(sizeof(sprite_t));
    S->texture = sfTexture_createFromFile("Sprite/Bullets.png", NULL);
    if (!S->texture)
        return NULL;
    S->sprite = sfSprite_create();
    sfSprite_setTexture(S->sprite, S->texture, sfTrue);
    sfRenderWindow_setMouseCursorVisible(window, sfFalse);
    return(S);
}

sprite_t *createDogSprite()
{
    sprite_t *S = malloc(sizeof(sprite_t));
    S->texture = sfTexture_createFromFile("Sprite/dog.png", NULL);
    if (!S->texture)
        return NULL;
    S->sprite = sfSprite_create();
    sfSprite_setTexture(S->sprite, S->texture, sfTrue);
    return (S);
}