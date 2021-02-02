#pragma once
#include "GameState.h"
#include <string>
class HighScoreInput : public GameState
{
private:
	sf::Text labelText; // f�r instruktioner till anv�ndaren
	sf::Text text; // f�r att visa anv�ndarens inmatning
	sf::Font font;
	std::string name; // f�r att registrera anv�ndarens inmatning
	bool done;
public:
	HighScoreInput();
	virtual ~HighScoreInput();

	// Inherited via GameState
	virtual State update() override;

	virtual void render() override;

	virtual void handleEvents() override;

};
