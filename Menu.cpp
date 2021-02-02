#include "Menu.h"
#include <iostream>

void Menu::moveUp()
{
	/*

	uppdatera selected om möjligt och byt färg så att aktivt menyalterantiv är rött (annars gult)
	
	*/
}

void Menu::moveDown()
{
	/*
	
	uppdatera selected om möjligt och byt färg  så att aktivt menyalterantiv är rött (annars gult)
	
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

	om ingen förändring har skett ska retur göras motsvarande ingen förändring och annars ska ett relevant State returneras

	*/
	
	return State();
}

void Menu::render()
{
	window.clear();

	/*

	tillse att menyn ritas i fönstret
	
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

		undersök och agera på tangetnedtryckningar (Up, Down, Return) där Return betyder att användaren bekräftar sitt val

		*/
		
	}
}

