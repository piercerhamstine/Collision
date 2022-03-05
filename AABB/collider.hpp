#ifndef COLLIDER_HPP
#define COLLIDER_HPP

#include <SFML/System/Vector2.hpp>
#include "bounds.hpp"

class Collider
{
public:
    //Constructors
    Collider(float posX, float posY, float sizeX, float sizeY);
    Collider(const sf::Vector2f colPos, const sf::Vector2f colSize);
    Collider();
    ~Collider();

    // Functions
    virtual bool Intersects(const Collider& other);
    virtual void CollisionResolution();

    // Setters
    void SetTrigger(bool isTrigger);
    void UpdatePos(sf::Vector2f newPos);

    // Getters
    Bounds GetBounds();
private:
    // Width and height of collider.
    sf::Vector2f colSize;
    // Top left of the collider.
    sf::Vector2f colPos;

    // Bounds of this collider. Top left,right;Bot left,right.
    Bounds colBounds;

    // If the collider should resolve collisions with it.
    bool isTrigger;
};

#endif