#include "Enemy.h"

void Enemy::initSprite()
{
	this->enemyTex.loadFromFile("allpic/enemy.png");
	this->enemy.setTexture(this->enemyTex);
	this->enemy.setTextureRect(sf::IntRect(370, 12, 191, 285));
	this->enemy.setPosition(20.f, 20.f);
}

Enemy::Enemy()
{
	this->initSprite();
}

Enemy::~Enemy()
{

}


void Enemy::move()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		this->enemy.move(-0.1f, 0.f);

	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		this->enemy.move(+0.1f, 0.f);

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		this->enemy.move(0.f, -0.1f);

	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		this->enemy.move(0.f, +0.1f);
}

void Enemy::update()
{
	this->move();
}

void Enemy::render(sf::RenderTarget* target)
{
	target->draw(this->enemy);
}


