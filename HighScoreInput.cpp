#include "HighScoreInput.h"
#include <iostream>

HighScoreInput::HighScoreInput()
	:GameState("Highscore")
{
	font.loadFromFile("C:/Windows/Fonts/arial.ttf");
	labelText.setFont(font);
	labelText.setPosition(50.f, 50.f);
	labelText.setFillColor(sf::Color::Green);
	labelText.setCharacterSize(30);
	labelText.setString("Input name (<enter> when done)");

	text.setFont(font);
	text.setPosition(200.f, 200.f);
	text.setFillColor(sf::Color::Green);
	text.setCharacterSize(30);
	name = "";

	text.setString(name);
	done = false;
}

HighScoreInput::~HighScoreInput()
{
}

State HighScoreInput::update()
{
	/*

	om ingen förändring har skett ska retur göras motsvarande ingen förändring och annars ska State MENU returneras

	*/

	return State();
}

void HighScoreInput::render()
{
	window.clear();

	/*
	
	tillse att texterna visas i fönstret
	
	*/

	window.display();
}

void HighScoreInput::handleEvents()
{
	sf::Event event;
	while (window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			window.close();
		}
		/*
		
		hantera tangentnedtryckningar där Return betyder klar och tangenterna A-Z ska registreras

		Tips:
		event.text.unicode ger värdet 0 för A och värdet 25 för Z

		för att få ascii-värdet adderas 65 till unicode, dvs name += (char)(event.text.unicode + 65) lägger till tecken som genererade eventet

		Tips: Om det ska vara möjligt att "sudda" identifieras att BackSpace tryckts ned och
		därefter kan erase-funktionen för string användas där paramerlistan motsvarar (int startIndex, int antalTeckenSomSkaRaderas)
		
		uppdatera text med name
		*/
		
	}
}

