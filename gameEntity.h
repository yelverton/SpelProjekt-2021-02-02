#pragma once
#include <SFML/Graphics.hpp>

class GameEntity :public sf::Drawable
{
private:
	sf::Sprite sprite;
	sf::Texture texture;
	sf::IntRect intRect;
	//Hurtbox* hurtboxPtr;
	//Hitbox* hitboxPtr;

	float speed;

	int timeCounter;
	int frameCounter;
	int frames;
	int colums;
	int row;
	bool inAir;
	float jumpVelocity;

	//int attackFrameLength;
	//bool animationActive;
	//int nrOfTotalColumns;
	//int thisAnimationColumnsNr;
	//int frameCounter;
	//bool walking;
	//bool doNotMoveDuringAnimation;
	//float jumpVelocity;
	//bool jumping;
	//int priority;
	//int counterBecauseFrameCounterDidNotWork;
	//bool checkEnemyHit;

//protected:
//	void updateHurtbox();
//	void updateHitbox();

public:
	GameEntity(float speed, std::string filename, float jumpVelocity);
	virtual ~GameEntity();
	float getSpeed() const;
	sf::FloatRect getSpriteGlobal() const;
	sf::Vector2f getSpritePos() const;
	void setSpritePosition(float xPos, float yPos);
	void moveSpritePosition(float offSetX, float offSetY);
	virtual void spawn(float xPos, float yPos) = 0;
	virtual void update() = 0;

	void changeAnimation(int row, int colums, int frames);
	void animationSpriteUpdate();
	void jumping();


	//sf::FloatRect getHitbox() const;
	//sf::FloatRect getHurtbox() const;

	//void createHurtbox(sf::Sprite& sprite);
	//void createHitbox(sf::Sprite& sprite);

	//void setEnemyHit(bool set);
	//bool getAnimationActive() const;
	//bool getCheckEnemyHit() const;

	//void hitBoxOut();
	//void changeHitBoxLightPunch();

	//sf::Vector2f getScale();
	//void walkingTrue();
	//void walkingFalse(int stopMoving);
	//bool isAnimationActive();
	//sf::IntRect getTextRect();
	//bool isUnableToMove();
	//void setVelocity(float velocity);
	//void isJumping(bool jumping);
	//void flipSprite();

	// Inherited via Drawable
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

};