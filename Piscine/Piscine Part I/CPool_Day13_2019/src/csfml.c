/*
** EPITECH PROJECT, 2019
** csflm
** File description:
** oui
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/my_hunter.h"

sprite_t *score(int n)
{
    char *sc = n + 48;
    sprite_t *S = malloc(sizeof(sprite_t));
    sfFont* font;
    sfText* text;
    S->font = sfFont_createFromFile("Sprite/04b_25.ttf");
    if (!S->font)
        return EXIT_FAILURE;
    S->text = sfText_create();
    sfText_setString(S->text, sc);
    sfText_setFont(S->text, S->font);
    sfText_setCharacterSize(S->text, 50);
    return (S);
}

int main(void)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfEvent event;
    sfRenderWindow *window = sfRenderWindow_create(mode, "Duck Hunt", sfResize
    | sfClose, NULL);
    if (!window)
        return 0;
    sprite_t *ps = pos_sprite_duck();
    sprite_t *psd = pos_sprite_dog();
    sprite_t *sctext = createtext();
    sprite_t *background = createBackgroundSprite();
    sprite_t *duck = createDuckSprite();
    sprite_t *crossH = createCrossHSprite(window);
    sprite_t *dog = createDogSprite();
    sfSprite_setTextureRect(duck->sprite, ps->rect_duck);
    sfSprite_setPosition(duck->sprite, ps->pos_duck);
    sfSprite_setPosition(dog->sprite, psd->pos_dog);
    sfSprite_setTextureRect(dog->sprite, psd->rect_dog);
    sfClock *clock1 = sfClock_create();
    sfClock *clock2 = sfClock_create();
    sfClock *clock3 = sfClock_create();
    sfClock *clock4 = sfClock_create();
    int n = 0;
    sprite_t *scortext = score(n);
    while (sfRenderWindow_isOpen(window))
    {
        ps->cursor_pos.x = sfMouse_getPosition(window).x;
        ps->cursor_pos.y = sfMouse_getPosition(window).y;
        sfSprite_setPosition(crossH->sprite, ps->cursor_pos);
        while (sfRenderWindow_pollEvent(window, &event))
        {
            if (event.type == sfEvtMouseButtonReleased 
            && hitbox(ps, 150, 150)) {
            srand(time(NULL));
            int y = rand() % 800;
            ps->x_duck = -210;
            ps->pos_duck.y = y;
            n++;

            sprite_t *score(n);
            }
            if (event.type == sfEvtClosed
            || sfKeyboard_isKeyPressed(sfKeyEscape))
                sfRenderWindow_close(window);
        }
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, background->sprite, NULL);
        sfRenderWindow_drawSprite(window, duck->sprite, NULL);
        sfRenderWindow_drawSprite(window, dog->sprite, NULL);
        anim_duck(clock1, &ps->rect_duck, duck->sprite);
        posi_duck(clock2, &ps->pos_duck, duck->sprite, &ps->x_duck);
        anim_dog(clock3, &psd->rect_dog, dog->sprite);
        posi_dog(clock4, &psd->pos_duck, dog->sprite, &psd->x_dog);
        sfRenderWindow_drawSprite(window, crossH->sprite, NULL);
        sfRenderWindow_drawText(window, sctext->text, NULL);
        sfRenderWindow_drawText(window, scortext->text, NULL);
        sfRenderWindow_display(window);
    }
    sprite_t *destroy();
}