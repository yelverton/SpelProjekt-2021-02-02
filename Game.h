#pragma once
#include "GameState.h"
#include "Character.h"
#include <vector>

#define PLAYERS 2

class Game : public GameState
{
private:
	sf::Time timePerFrame;
	sf::Time elapsedTimeSinceLastUpdate;
	sf::Clock clock;

	std::vector<Character*> characterVector;

protected:
	virtual State update() override;
	virtual void render() override;
	virtual void handleEvents() override;

public:
	Game();
	virtual ~Game();
	void run();

};
