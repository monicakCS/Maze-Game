#include "Player.h"

Player::Player() :
    playerSprite(SDL_LoadBMP("../Project 2 [CSCI 115]/Sprite/Character/Player.bmp")), currentDirection(SDLK_s), numArrow(1)
{
    SDL_SetColorKey(playerSprite, SDL_TRUE, SDL_MapRGB(playerSprite->format, 255, 255, 255));
}

Player::~Player() { SDL_FreeSurface(playerSprite); }

