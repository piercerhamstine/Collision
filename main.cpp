#include <iostream>
#include <SFML/Graphics.hpp>
#include "Box/box.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 400), "SFML works!");

    Box b1 = Box(sf::Vector2f(0, 0), sf::Vector2f(10,10));
    b1.SetColor(sf::Color::White);

    Box b2 = Box(sf::Vector2f(11,11), sf::Vector2f(10,10));

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

            window.clear();
            window.draw(b1);
            window.draw(b2);
            window.display();
    }

    return 0;
}