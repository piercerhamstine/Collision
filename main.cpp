#include <iostream>
#include <SFML/Graphics.hpp>
#include <random>

#include "AABB/collider.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 400), "SFML works!");

    Collider c1(sf::Vector2f(0,0), sf::Vector2f(1,1));
    Collider c2(sf::Vector2f(1./2,1./2), sf::Vector2f(1,1));

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

            window.clear();
            window.display();
    }

    return 0;
}