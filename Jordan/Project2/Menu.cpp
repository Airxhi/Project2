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

	playButton.setPosition(40, 40);
	playButton.setSize(sf::Vector2f(100, 100));
	playButton.setText("Play");

	settingsButton.setPosition(40, 160);
	settingsButton.setSize(sf::Vector2f(100, 100));
	settingsButton.setText("Settings");

	scoresButton.setPosition(40, 280);
	scoresButton.setSize(sf::Vector2f(100, 100));
	scoresButton.setText("Scores");

	exitButton.setPosition(40, 400);
	exitButton.setSize(sf::Vector2f(100, 100));
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