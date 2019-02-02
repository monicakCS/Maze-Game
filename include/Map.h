#ifndef MAP_H
#define MAP_H

#include "Player.h"
#include "Enemy.h"

#include <SDL.h>
#include <utility>
#include <fstream>
#include <vector>
#include <iostream>
#include <queue>
#include <stack>

class Map : Player, Enemy
{
    public:
        Map();
        virtual ~Map();

        //Short path
        void BFS(int);

        //Read the text file
        void mapText();

        //Check if the player move is safe or not
        bool checkTile(int, int);
        //Move player
        void checkPlayerMove(SDL_Keycode);

        //Reset everything
        void resetMap();

        //How many enemies are left
        int getEnemySize() { return Enemy::enemyPosition.size(); }

        //Get function for Player class
        SDL_Surface* getPlayerSprite() { return Player::playerSprite; }
        SDL_Rect* getPlayerPosition() { return &(Player::playerPosition); }

        //Get function for Enemy class
        SDL_Surface* getEnemySprite() { return Enemy::enemySprite; }
        SDL_Rect* getEnemyPosition(int i) { return &(Enemy::enemyPosition[i]); }

    protected:
        //Arrow
        SDL_Surface *arrowSprite;
        std::vector<SDL_Rect> arrowPosition;

        //Wall
        SDL_Surface *wallSprite;
        std::vector<SDL_Rect> wallPosition;

        //Floor
        SDL_Surface *floorSprite;
        std::vector<SDL_Rect> floorPosition;

        //Chest
        SDL_Surface *chestSprite;
        SDL_Rect chestPostion;

        //Check if the game is running or not
        bool isRuuning;
        //For text file
        std::vector<std::string> mapMaze;
};

#endif // MAP_H
