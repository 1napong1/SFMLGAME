//#include "Player.h"
//
//void Player::initSprite()
//{
//	this->playerTex.loadFromFile("allpic/player.png");
//	this->player.setTexture(this->playerTex);
//	this->player.setScale(0.1f, 0.1f);
//}
//
//Player::Player()
//{
//	this->initSprite();
//}
//
//Player::~Player()
//{
//
//}
//
//void Player::move()
//{
//	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
//		this->player.move(-0.1f, 0.f);
//
//	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
//		this->player.move(+0.1f, 0.f);
//
//	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
//		this->player.move(0.f, -0.1f);
//
//	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
//		this->player.move(0.f, +0.1f);
//
//}
//
//void Player::update()
//{
//	this->move();
//}
//
//void Player::render(sf::RenderTarget* target)
//{
//	target->draw(this->player);
//}