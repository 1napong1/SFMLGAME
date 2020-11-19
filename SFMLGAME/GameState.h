#pragma once

#include "State.h"
#include "Player.h"
#include "Enemy.h"

class GameState :
    public State
{
private:
    Entity player;
   // Player* player;
   // Enemy* enemy;


  //  void initenemy();
  // void initplayer();

public:
    GameState(sf::RenderWindow* window);
    virtual ~GameState();

   // Functions
    /*void updatePlayer();
    void renderPlayer();
    void updateEnemy();
    void renderEnemy();*/
    void endState();
    void updateInput(const float& dt);
    void update(const float& dt);
    void render(sf::RenderTarget* target = NULL);
};