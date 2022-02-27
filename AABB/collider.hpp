#ifndef COLLIDER_HPP
#define COLLIDER_HPP

#include <SFML/System/Vector2.hpp>

class Collider
{
public:
    Collider(float sizeX, float sizeY, float posX, float posY);
    Collider(const sf::Vector2f colSize, const sf::Vector2f colPos);
    Collider();
    ~Collider();
private:
    // Width and height of collider.
    sf::Vector2f colSize;
    // Position of the center of the collider.
    sf::Vector2f colPos;
};

#endif