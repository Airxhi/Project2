#include "Level.h"
#include "Input.h"
void main()
{
	// Create window
	sf::RenderWindow window(sf::VideoMode(800, 600), "Lab 1");
	// Initialise level object
	Input input;
	sf::RenderWindow hwnd;
	sf::RenderWindow* hwndref = &hwnd;
	Input in;
	Input* inref = &in;
	Level level(hwndref, inref);
	
	
	//time
	sf::Clock clock;
	float deltaTime;

	// Game loop
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();
				break;
			case sf::Event::Resized:
				window.setView(sf::View(sf::FloatRect(0.f, 0.f,	(float)event.size.width, (float)event.size.height)));
				break;
			case sf::Event::KeyPressed:
				// update input class
				input.setKeyDown(event.key.code);
				break;
			case sf::Event::KeyReleased:
				//update input class
				input.setKeyUp(event.key.code);
				break;
			case sf::Event::MouseMoved:
				//update input class
				input.setMousePosition(event.mouseMove.x,event.mouseMove.y);
				break;
			case sf::Event::MouseButtonPressed:
				if (event.mouseButton.button == sf::Mouse::Left)
				{
					//update input class
					input.setMouseLeftDown(true);
				}
				break;
			case sf::Event::MouseButtonReleased:
				if (event.mouseButton.button == sf::Mouse::Left)
				{
					//update input class
					input.setMouseLeftDown(false);
				}
				break;
			default:
				// don't handle other events
				break;
			}
		}
		//deltaTime = clock.restart().asSeconds();

		//std::cout << "W was pressed\n";
		// Level
		if (input.isKeyDown(sf::Keyboard::W))
		{
			input.setKeyUp(sf::Keyboard::W);
			std::cout << "W was pressed\n";
		}
		if (input.isKeyDown(sf::Keyboard::J))
		{
			if (input.isKeyDown(sf::Keyboard::K))
			{
				if (input.isKeyDown(sf::Keyboard::L))
				{
					input.setKeyUp(sf::Keyboard::J);
					input.setKeyUp(sf::Keyboard::K);
					input.setKeyUp(sf::Keyboard::L);
					std::cout << "J, k and L were pressed\n";
				}
			}
		}
		level.handleInput();
		level.update();
		level.render();
	}

}
