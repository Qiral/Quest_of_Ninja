#include "Player.h"

void Player::initVariable()
{
}

void Player::initComponents()
{
}

Player::Player(float x, float y, sf::Texture* texture)
{
	this->initVariable();
	this->initComponents();

	this->createSprite(texture);
	this->setPosition(x, y);
}

Player::~Player()
{
}