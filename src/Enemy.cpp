#include "Enemy.h"

Enemy::Enemy()
{
    enemySprite = SDL_LoadBMP("../Project 2 [CSCI 115]/Sprite/Character/Enemy.bmp");
    SDL_SetColorKey(enemySprite, SDL_TRUE, SDL_MapRGB(enemySprite->format, 255, 255, 255));

}

Enemy::~Enemy() { SDL_FreeSurface(enemySprite); }
