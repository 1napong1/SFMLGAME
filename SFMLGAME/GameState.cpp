#include "GameState.h"



//void GameState::initenemy()
//{
//	this->enemy = new Enemy();
//}
//
//void GameState::initplayer()
//{
//	this->player = new Player();
//}

GameState::GameState(sf::RenderWindow* window)
	:State(window)
{
	/*this->initplayer();
	this->initenemy();*/
}

GameState::~GameState()
{

}



//void GameState::updatePlayer()
//{
//	this->player->update();
//}
//
//void GameState::renderPlayer()
//{
//	this->player->render(this->window);
//}
//
//void GameState::updateEnemy()
//{
//	this->enemy->update();
//}
//
//void GameState::renderEnemy()
//{
//	this->enemy->render(this->window);
//}

void GameState::endState()
{
	std::cout << "Ending GameState" << "\n";
}

void GameState::updateInput(const float& dt)
{
	this->checkForQuit();

	//Update player input
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		this->player.move(dt, -1.f, 0.f);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		this->player.move(dt, +1.f, 0.f);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		this->player.move(dt, 0.f, -1.f);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		this->player.move(dt, 0.f, +1.f);
}

void GameState::update(const float& dt)
{
	this->updateInput(dt);

	this->player.update(dt);
	//this->updatePlayer();
	//this->updateEnemy();
}

void GameState::render(sf::RenderTarget* target)
{
	//this->renderEnemy();
	//this->renderPlayer();
	if (!target)
		target = this->window;

	this->player.render(target);
	
}