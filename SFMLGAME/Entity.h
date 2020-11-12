#pragma once

#include<SFML/Graphics.hpp>
#include<SFML/Window.hpp>
#include<SFML/System.hpp>
#include<SFML/Audio.hpp>
#include<SFML/Network.hpp>

#include<iostream>
#include"Menu.h"
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



public:
	Entity();
	virtual ~Entity();


	//Functions
	virtual void update(const float& dt) = 0;
	virtual void render(sf::RenderTarget& target) = 0;

};

