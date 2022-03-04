#ifndef BOUNDS_HPP
#define BOUNDS_HPP

#include "SFML/Graphics.hpp"

struct Bounds
{
    Bounds(){};
    Bounds(sf::Vector2f pos, sf::Vector2f size) :
    topLeft(pos), topRight(pos.x+size.x, pos.y), botLeft(pos.x, pos.y+size.y), botRight(pos.x+size.x, pos.y+size.y), center((pos.x+size.x)/2, (pos.y+size.y)/2)
    {};

    sf::Vector2f topLeft;
    sf::Vector2f topRight;

    sf::Vector2f botLeft;
    sf::Vector2f botRight;
    sf::Vector2f center;
};

#endif