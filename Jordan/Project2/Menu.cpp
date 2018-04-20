#include "Menu.h"


Menu::Menu(sf::RenderWindow* hwnd, Input* inp)
	: playButton(hwnd), settingsButton(hwnd), scoresButton(hwnd), exitButton(hwnd)
{
	window = hwnd;
	initButtons();
	
	
}


Menu::~Menu()
{
}

void Menu::initButtons() {
	sf::Vector2u size = window->getSize();
	int buttonWidth = 300;
	int width = size.x;
	int height = size.y;
	playButton.setPosition(width/2-buttonWidth/2, 40);
	playButton.setSize(sf::Vector2f(buttonWidth, 60));
	playButton.setText("Play");

	settingsButton.setPosition(width/2-buttonWidth/2, 160);
	settingsButton.setSize(sf::Vector2f(buttonWidth, 60));
	settingsButton.setText("Settings");

	scoresButton.setPosition(width/2-buttonWidth/2, 280);
	scoresButton.setSize(sf::Vector2f(buttonWidth, 60));
	scoresButton.setText("Scores");

	exitButton.setPosition(width/2-buttonWidth/2, 400);
	exitButton.setSize(sf::Vector2f(buttonWidth, 60));
	exitButton.setText("Exit");
}

void Menu::render() {
	//Clear background
	window->clear(sf::Color::Black);

	renderBackground();

	playButton.render();
	settingsButton.render();
	scoresButton.render();
	exitButton.render();

	//Display 
	window->display();
}

void Menu::renderBackground() {
	// Render starry background (maybe in star wars hyperspace style?)
}