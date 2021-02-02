#include "Character.h"
#include <iostream>
#include <string>
Character::Character()
	:GameEntity(0.15f, "ken", jumpVelocity), lives(300), xDir(0), yDir(0)
{
	jumpVelocity = 0;
	//jumpVelocity = 0;
	//xDir = 0;
	//yDir = 0;
	//isGrounded = true;
}

int Character::getLives()
{
	return this->lives;
}

void Character::decreaseLives(int amountToDecrease)
{
	this->lives -= amountToDecrease;
}

void Character::increaseLives(int amountToIncrease)
{
	if (this->lives < 300)
	{
		this->lives += amountToIncrease;
	}
}

void Character::idle()
{
	changeAnimation(1, 4, 100);
	xDir = 0;
	yDir = 0;
}

void Character::walkRight()
{
	changeAnimation(3, 5, 100);
	xDir = 1;
}

void Character::walkLeft()
{
	changeAnimation(3, 5, 100);
	xDir = -1;
}

void Character::jump()
{
	jumpVelocity += 0.090f;
	changeAnimation(8, 7, 100);
}

void Character::inAir()
{
	if (jumpVelocity < 10)
	{
		yDir -= 0.009f;
	}
	//else if (jumpVelocity > 5)
	//{
	//	yDir = +5;
	//}
	//else if (jumpVelocity == -5 && getSpritePos().y <= 520)
	//{
	//	yDir = 0;
	//	jumpVelocity = 0;
	//	setSpritePosition(getSpritePos().x, 520);
	//}
}

void Character::croth()
{
}

void Character::lightPunch()
{
}

void Character::hardPunch()
{
}

void Character::specialAttack()
{
}

//void Character::collisionBetweenCharacters(Character& other)
//{
//	if (this->getHurtbox().intersects(other.getHitbox()))
//	{
//		this->setEnemyHit(true);
//		std::cout << "hej" << std::endl;
//		this->decreaseLives(10);
//	}
//}
//void Character::lightPunch()
//{
//
//	changeAnimation(2, 3, 10, 1);
//	this->changeHitBoxLightPunch();
//	animationSpriteUpdate();
//}
//
//void Character::hardKick()
//{
//	changeAnimation(6, 5, 13, 1);
//
//	animationSpriteUpdate();
//}
//
//void Character::walkRight()
//{
//	walkingTrue();
//	changeAnimation(3, 5, 10, 0);
//	animationSpriteUpdate();
//}
//
//void Character::specialAttack()
//{
//	changeAnimation(0, 4, 12, 1);
//	animationSpriteUpdate();
//}
//
//void Character::crouch()
//{
//	changeAnimation(9, 1, 4, 1);
//	animationSpriteUpdate();
//}
//
//void Character::jump()
//{
//	setVelocity(-3);
//	jumpVelocity = -3;
//	changeAnimation(8, 2, 7, 1);
//	animationSpriteUpdate();
//	std::cout << xDir << std::endl;
//	moveSpritePosition(xDir, jumpVelocity);
//	isJumping(!isGrounded);
//}
//void Character::isInAir()
//{
//
//	moveSpritePosition(xDir, jumpVelocity);
//	jumpVelocity += 0.090f;
//	setVelocity(jumpVelocity);
//	isJumping(!isGrounded);
//	//std::cout << "asd" << std::endl;
//}
//
//void Character::putHitBoxOutside()
//{
//	this->hitBoxOut();
//}
//void Character::setRotation(float rotation)
//{
//	this->setSpriteRotation(rotation);
//}

void Character::spawn(float xPos, float yPos)
{
	setSpritePosition(xPos, yPos);
}

void Character::update()
{
	if (jumpVelocity != 0)
	{
		inAir();
	}

	this->animationSpriteUpdate();
	this->moveSpritePosition(xDir, yDir);
	//updateHurtbox();
	//updateHitbox();
	//if (getSpritePos().y < 520)
	//{
	//	//if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	//	isInAir();
	//	isGrounded = false;
	//}
	//else
	//{
	//	isGrounded = true;
	//	if (getSpritePos().y > 520)
	//	{
	//		setSpritePosition(getSpritePos().x, 520);
	//	}
	//	jumpVelocity = 0;
	//	setVelocity(0);
	//	isJumping(!isGrounded);
	//}
	//if (isUnableToMove() == false)
	//{
	//	if (isGrounded == true)
	//	{
	//		if (player != 0)
	//		{
	//			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	//			{
	//				xDir = 1;
	//				walkRight();
	//			}
	//			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	//			{
	//				xDir = -1;
	//				walkRight();
	//			}
	//			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	//			{
	//				xDir = 0;
	//				crouch();
	//			}
	//			else
	//			{
	//				walkingFalse(5);
	//				xDir = 0;
	//			}
	//		}
	//		else
	//		{
	//			if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	//			{
	//				xDir = 1;
	//				walkRight();
	//			}
	//			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	//			{
	//				xDir = -1;
	//				walkRight();
	//			}
	//			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	//			{
	//				xDir = 0;
	//				crouch();
	//			}
	//			else
	//			{
	//				walkingFalse(5);
	//				xDir = 0;
	//			}
	//		}
	//		moveSpritePosition(xDir, yDir);
	//	}
	//}
}
