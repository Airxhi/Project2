#include "MenuButton.h"

MenuButton::MenuButton(sf::RenderWindow* hwnd)
{
	// Initialize Menu
	window = hwnd;
}


MenuButton::~MenuButton()
{
}

void MenuButton::setText(sf::String str) {
	text.setString(str);
}

void MenuButton::setSize(sf::Vector2f size) {
	rect.setSize(size);
}

void MenuButton::setPosition(float x, float y) {
	rect.setPosition(x, y);
}

void MenuButton::render() {
	window->draw(rect);
	window->draw(text);
}

