#ifndef COLLIDER_HPP
#define COLLIDER_HPP

#include "SFML/Graphics.hpp"
#include "bounds.hpp"

#include <iostream>

class Collider
{
public:
    Collider();
    Collider(sf::Vector2f position, sf::Vector2f size);

    bool Intersects(const Collider& other) const;

    const Bounds GetBounds();
private:
    Bounds bounds;
    sf::Vector2f size;
};

#endif