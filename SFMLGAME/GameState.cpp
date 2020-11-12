#include "GameState.h"



void GameState::initenemy()
{
	this->enemy = new Enemy();
}

void GameState::initplayer()
{
	this->player = new Player();
}

GameState::GameState(sf::RenderWindow* window)
	:State(window)
{
	this->initplayer();
	this->initenemy();
}

GameState::~GameState()
{

}



void GameState::updatePlayer()
{
	this->player->update();
}

void GameState::renderPlayer()
{
	this->player->render(this->window);
}

void GameState::updateEnemy()
{
	this->enemy->update();
}

void GameState::renderEnemy()
{
	this->enemy->render(this->window);
}

void GameState::endState()
{
	std::cout << "Ending GameState" << "\n";
}

void GameState::updateKeybinds(const float& dt)
{
	this->checkForQuit();
}

void GameState::update(const float& dt)
{
	this->updateKeybinds(dt);
	this->updatePlayer();
	this->updateEnemy();
}

void GameState::render(sf::RenderTarget* target)
{
	this->renderEnemy();
	this->renderPlayer();
	
}
