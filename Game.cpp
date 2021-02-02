#include "Game.h"
#include <iostream>
#include "State.h"

Game::Game()
	:GameState("Game")
{
	elapsedTimeSinceLastUpdate = sf::Time::Zero;
	timePerFrame = sf::seconds(1 / 60.f);

	for (int i = 0; i < PLAYERS; i++)
	{
		characterVector.push_back(new Character());
		characterVector[i]->setSpritePosition(100.f + (i * 600.f), 520.f);
	}
}

Game::~Game()
{
	for (int i = 0; i < this->characterVector.size(); i++)
	{
		delete this->characterVector[i];
	}
}

State Game::update()
{
	
	elapsedTimeSinceLastUpdate += clock.restart();
	
	while (elapsedTimeSinceLastUpdate > timePerFrame)
	{
		elapsedTimeSinceLastUpdate -= timePerFrame;
	}
	
	for (int i = 0; i < PLAYERS; i++)
	{
		characterVector[i]->update();
	}


	/*

	om ingen förändring har skett ska retur göras motsvarande ingen förändring och annars ska State HIGHSCORE_INPUT returneras

	*/
	return State();
}

void Game::render()
{
	window.clear();
	for (int i = 0; i < characterVector.size(); i++)
	{
		window.draw(*this->characterVector[i]);
	}
	window.display();
}

void Game::handleEvents()
{
	sf::Event event;
	while (window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			window.close();
		}

		if (event.type == sf::Event::KeyPressed)
		{
			switch (event.key.code)
			{
			case sf::Keyboard::D:
				this->characterVector[0]->walkRight();
				break;
			case sf::Keyboard::A:
				this->characterVector[0]->walkLeft();
				break;
			case sf::Keyboard::W:
				this->characterVector[0]->jump();
				break;
			case sf::Keyboard::Right:
				this->characterVector[1]->walkRight();
				break;
			case sf::Keyboard::Left:
				this->characterVector[1]->walkLeft();
				break;
			}
		}
		if (event.type == sf::Event::KeyReleased)
		{
			switch (event.key.code)
			{
				case sf::Keyboard::D:
					this->characterVector[0]->idle();
					break;
				case sf::Keyboard::A:
					this->characterVector[0]->idle();
					break;
				case sf::Keyboard::W:
					this->characterVector[0]->idle();
					break;
				case sf::Keyboard::Right:
					this->characterVector[1]->idle();
					break;
				case sf::Keyboard::Left:
					this->characterVector[1]->idle();
					break;
			}
		}


		//if (event.type == sf::Event::KeyPressed)
		//{
		//	switch (event.key.code)
		//	{
		//		case sf::Keyboard::D:
		//			characterVector[0]->walkRight();
		//		break;
		//	}
		//}
	}
}

void Game::run()
{
	while (window.isOpen())
	{
		handleEvents();
		update();
		render();
	}
}






