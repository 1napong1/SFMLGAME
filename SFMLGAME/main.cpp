#include"Game.h"



//class Bullet
//{
//public:
//	Sprite shape;
//	Bullet(Texture* texture)
//	{
//		this->shape.setTexture(*texture);
//		this->shape.setScale(1.5f, 1.5f);
//	}
//
//
//	~Bullet() {};
//};

//class Player
//{
//public:
//	Sprite shape;
//	Texture* texture;
//	int HP;
//	int HPMax;
//	vector<Bullet> bullet;
//
//	Player(Texture *texture)
//	{
//		this->HPMax = 10;
//		this->HP = this->HPMax;
//
//		this->texture = texture;
//		this->shape.setTexture(*texture);
//
//		this->shape.setScale(0.2, 0.2);
//		this->shape.setRotation(0.f);
//		this->shape.setPosition(0.f, 0.f);
//	}
//	~Player(){}
//
//};

//class Enemy
//{
//
//};




int main()
{
	//srand(time(NULL));
	
	Game game;
	game.run();
	return 0;

	////init text
	//Font font;
	//font.loadFromFile("Arial.ttf");

	////init texture
	//Texture playerTex;
	//playerTex.loadFromFile("allpic/player.png");

	////Texture enemyTex;
	//enemyTex.loadFromFile("allpic/enemy.png");

	////Texture bulletTex;
	//bulletTex.loadFromFile("allpic/missile.png");


	//player init 
	//Player player(&playerTex);
	

	
			
		//update
		///*if (Mouse::isButtonPressed(Mouse::Left))
		//{
		//	player.bullet.push_back(Bullet(&bulletTex));
		//}*/

		//draw//
		
		//window.draw(player.shape);
	///*	for (size_t i = 0;i < player.bullet.size();i++)
	//	{
	//		window.draw(player.bullet[i].shape);
	//	*/}
		

	
	
}
