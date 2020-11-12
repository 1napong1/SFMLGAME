#include "Game.h"

//Static functions



//Inittializer functions



void Game::initWindow()
{
	this->window = new sf::RenderWindow(sf::VideoMode(800, 600), "QUAY");
}

void Game::initStates()
{
	this->states.push(new GameState(this->window));
}

//Constructor/Destructors
Game::Game()
{
	this->initWindow();
	this->initStates();
}

Game::~Game()
{
	delete this->window;

	while (!this->states.empty())
	{
		delete this->states.top();
		this->states.pop();
	}
		

}



//Functions

void Game::endApplication()
{
	std::cout << "Ending Application" "\n";
}

void Game::updateDt()
{
	/*Update the dt variable with the time it taker to update and render one frame */

	this->dt = this->dtClock.restart().asSeconds();

}

void Game::updateSFMLEvent()
{
	while (this->window->pollEvent(this->sfEvent))
	{
		switch (this->sfEvent.type)
		{
		case sf::Event::Closed:
			this->window->close();

			break;
		}
	}
}


void Game::update()
{
	this->updateSFMLEvent();

	if (!this->states.empty())
	{
		this->states.top()->update(this->dt);

		if (this->states.top()->getQuit())
		{
			this->states.top()->endState();
			delete this->states.top();
			this->states.pop();
		}
	}
	//Application end
	else
	{
		this->endApplication();
		this->window->close();
	}
	
	/*int sum = 0;
	for (size_t i = 0;i < 30000000; i++)
	{
		sum += 1;
	}*/
}

void Game::render()
{
	this->window->clear();

	//Render Items
	if (!this->states.empty())
		this->states.top()->render();


	this->window->display();

}

void Game::run()
{
	while (this->window->isOpen())
	{
		this->updateDt();
		this->update();
		this->render();
	}
}


