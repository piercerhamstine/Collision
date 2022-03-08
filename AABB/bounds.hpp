#ifndef BOUNDS_HPP
#define BOUNDS_HPP

#include "SFML/Graphics.hpp"
#include <iostream>

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

    friend std::ostream& operator<<(std::ostream& ostream, const Bounds b)
    {
        ostream << "Bounds Min: " << b.min.x << "," << b.min.y << "\n"
        << "Bounds Max: " << b.max.x << "," << b.max.y << std::endl;

        return ostream;
    };

    sf::Vector2f min;
    sf::Vector2f max;
};

#endif