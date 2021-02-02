#pragma once
#include "GameState.h"
#include <string>
class HighScoreInput : public GameState
{
private:
	sf::Text labelText; // för instruktioner till användaren
	sf::Text text; // för att visa användarens inmatning
	sf::Font font;
	std::string name; // för att registrera användarens inmatning
	bool done;
public:
	HighScoreInput();
	virtual ~HighScoreInput();

	// Inherited via GameState
	virtual State update() override;

	virtual void render() override;

	virtual void handleEvents() override;

};
