#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>

class MenuButton
{
public:
	MenuButton(sf::RenderWindow* hwnd);
	~MenuButton();
	void render();
	void setText(sf::String str);
	void setSize(sf::Vector2f size);
	void setPosition(float x, float y);
private:
	sf::RenderWindow* window;
	sf::RectangleShape rect;
	sf::Font arial;
	sf::Text text;
};
