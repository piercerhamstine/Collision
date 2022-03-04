#include <iostream>
#include <SFML/Graphics.hpp>
#include <random>

#include "AABB/collider.hpp"
#include "Box/box.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 400), "SFML works!");

    Box b1(10, 10);
    Box b2(10,10);

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