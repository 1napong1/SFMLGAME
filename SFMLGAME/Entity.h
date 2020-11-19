#pragma once

#include<SFML/Graphics.hpp>
#include<SFML/Window.hpp>
#include<SFML/System.hpp>
#include<SFML/Audio.hpp>
#include<SFML/Network.hpp>

#include<iostream>
#include<math.h>
#include<ctime>
#include<cstdlib>
#include<vector>
#include <stack>
#include <map>

class Entity
{
private:

protected:
	sf::RectangleShape shape;
	float movementSpeed;


public:
	Entity();
	virtual ~Entity();


	//Functions
	virtual void move(const float& dt, const float x, const float y);
	virtual void update(const float& dt);
	virtual void render(sf::RenderTarget* target);

};