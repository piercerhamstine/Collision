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

    void SetTrigger(bool isTrigger);
    bool Intersects(const Collider& other);
private:
    // Width and height of collider.
    sf::Vector2f colSize;
    // Position of the center of the collider.
    sf::Vector2f colPos;
    // If the collider should resolve collisions with it.
    bool isTrigger;
};

#endif