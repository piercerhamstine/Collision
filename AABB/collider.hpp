#ifndef COLLIDER_HPP
#define COLLIDER_HPP

#include <SFML/System/Vector2.hpp>

class Collider
{
public:
    Collider(float sizeX, float sizeY, float posX, float posY) : colSize(sizeX,sizeY), colPos(posX,posY){};
    Collider(const sf::Vector2f colSize, const sf::Vector2f colPos) : colSize(colSize), colPos(colPos){};
    Collider():colSize(){};
private:
    sf::Vector2f colSize;
    sf::Vector2f colPos;
};

#endif