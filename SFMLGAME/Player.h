#pragma once
#include "Entity.h"

class Player
{

private:
	sf::Sprite player;
	sf::Texture playerTex;

	void initSprite();

public:
	Player();
	~Player();

	//Functions
	void move();
	void update();
	void render(sf::RenderTarget* target);


};