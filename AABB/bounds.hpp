#ifndef BOUNDS_HPP
#define BOUNDS_HPP

#include "SFML/Graphics.hpp"

struct Bounds
{
    // Constructors
    Bounds() : min(), max(){};
    Bounds(sf::Vector2f position, sf::Vector2f size) : min(position), max((position.x+size.x), (position.y+size.y)) {};

    void SetBounds(sf::Vector2f position, sf::Vector2f size)
    {
        min = position;

        max = sf::Vector2f((min.x+size.x), (min.y + size.y));
    };

    sf::Vector2f min;
    sf::Vector2f max;
};

#endif