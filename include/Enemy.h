#ifndef ENEMY_H
#define ENEMY_H

#include <SDL.h>
#include <utility>
#include <vector>

class Enemy
{
    public:
        Enemy();
        virtual ~Enemy();

    protected:
        //Enemy image and coordinate for the screen
        SDL_Surface *enemySprite;
        std::vector<SDL_Rect> enemyPosition;
};

#endif // ENEMY_H
