#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 800), "SFML works!");
    sf::CircleShape shape(200.f,100);
    shape.setFillColor(sf::Color(204,77,5));
    shape.setPosition(200, 200);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color(18,33,43));
        window.draw(shape);
        window.display();
    }
	return 0;
}