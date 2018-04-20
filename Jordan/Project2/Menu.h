#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>
#include "Input.h"
#include "MenuButton.h"
class Menu
{
public:
	Menu(sf::RenderWindow* hwnd, Input* inp);
	~Menu();
	void render();
	void renderBackground();
private:
	sf::RenderWindow* window;
	/*MenuButton playButton;
	MenuButton settingsButton;
	MenuButton scoresButton;
	MenuButton exitButton;*/
};

