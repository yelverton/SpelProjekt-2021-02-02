#include "Menu.h"
#include <iostream>

void Menu::moveUp()
{
	/*

	uppdatera selected om m�jligt och byt f�rg s� att aktivt menyalterantiv �r r�tt (annars gult)
	
	*/
}

void Menu::moveDown()
{
	/*
	
	uppdatera selected om m�jligt och byt f�rg  s� att aktivt menyalterantiv �r r�tt (annars gult)
	
	*/
}

Menu::Menu()
	:GameState("Menu")
{
	font.loadFromFile("C:/Windows/Fonts/arial.ttf");
	alternatives[0].setFont(font);
	alternatives[0].setFillColor(sf::Color::Red);
	alternatives[0].setCharacterSize(30);
	alternatives[0].setString("Play");
	alternatives[0].setPosition(200.f, 200.f);

	alternatives[1].setFont(font);
	alternatives[1].setFillColor(sf::Color::Yellow);
	alternatives[1].setCharacterSize(30);
	alternatives[1].setString("Exit");
	alternatives[1].setPosition(200.f, 350.f);

	
	selected = 0;
	done = false;
}

Menu::~Menu()
{
}

State Menu::update()
{
	/*

	om ingen f�r�ndring har skett ska retur g�ras motsvarande ingen f�r�ndring och annars ska ett relevant State returneras

	*/
	
	return State();
}

void Menu::render()
{
	window.clear();

	/*

	tillse att menyn ritas i f�nstret
	
	*/
	
	window.display();
}

void Menu::handleEvents()
{
	sf::Event event;
	while (window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			window.close();
		}

		/*

		unders�k och agera p� tangetnedtryckningar (Up, Down, Return) d�r Return betyder att anv�ndaren bekr�ftar sitt val

		*/
		
	}
}

