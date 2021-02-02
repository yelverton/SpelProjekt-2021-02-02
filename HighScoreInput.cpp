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

	om ingen f�r�ndring har skett ska retur g�ras motsvarande ingen f�r�ndring och annars ska State MENU returneras

	*/

	return State();
}

void HighScoreInput::render()
{
	window.clear();

	/*
	
	tillse att texterna visas i f�nstret
	
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
		
		hantera tangentnedtryckningar d�r Return betyder klar och tangenterna A-Z ska registreras

		Tips:
		event.text.unicode ger v�rdet 0 f�r A och v�rdet 25 f�r Z

		f�r att f� ascii-v�rdet adderas 65 till unicode, dvs name += (char)(event.text.unicode + 65) l�gger till tecken som genererade eventet

		Tips: Om det ska vara m�jligt att "sudda" identifieras att BackSpace tryckts ned och
		d�refter kan erase-funktionen f�r string anv�ndas d�r paramerlistan motsvarar (int startIndex, int antalTeckenSomSkaRaderas)
		
		uppdatera text med name
		*/
		
	}
}

