#ifndef PLAYER_H
#define PLAYER_H

#include <SDL.h>

class Player
{
    public:
        Player();
        virtual ~Player();

    protected:
        //Player image and coordinate for the screen
        SDL_Surface *playerSprite;
        SDL_Rect playerPosition;

        //Current direction for shooting
        SDL_Keycode currentDirection;

        //How many arrow does player have
        int numArrow;
};

#endif // PLAYER_H
