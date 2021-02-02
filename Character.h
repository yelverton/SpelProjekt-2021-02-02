#pragma once
#include "GameEntity.h"

class Character :public GameEntity
{
private:
	int lives;
	float xDir;
	float yDir;
	float jumpVelocity;

	//bool isGrounded;

public:
	Character();

	int getLives();
	void decreaseLives(int amountToDecrease);
	void increaseLives(int amountToIncrease);
	void idle();
	void walkRight();
	void walkLeft();
	void jump();
	void inAir();
	void croth();
	void lightPunch();
	void hardPunch();
	void specialAttack();

	//void collisionBetweenCharacters(Character& other);
	//void lightPunch();
	//void hardKick();
	//void walkRight();
	//void specialAttack();
	//void crouch();
	//void jump();
	//void isInAir();
	//void putHitBoxOutside();

	// Inherited via GameEntity
	virtual void spawn(float xPos, float yPos) override;
	virtual void update() override;
};