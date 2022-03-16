#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window/Mouse.hpp>
#include "Box/box.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 400), "SFML works!");

    Box b1 = Box(sf::Vector2f(0, 0), sf::Vector2f(10,10));
    b1.SetColor(sf::Color::White);

    Box b2 = Box(sf::Vector2f(9,9), sf::Vector2f(10,10));

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
            
            sf::Vector2i mousePos = sf::Mouse::getPosition(window);
            b2.UpdatePosition(sf::Vector2f(mousePos.x, mousePos.y));

            window.clear();
            window.draw(b1);

            if(b2.HasCollision(b1))
            {
                b2.SetColor(sf::Color::Green);
            }
            else
            {
                b2.SetColor(sf::Color::White);
            };

            window.draw(b2);
            window.display();
    }

    return 0;
}