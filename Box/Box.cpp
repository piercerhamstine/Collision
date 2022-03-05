#include "box.hpp"

Box::Box(sf::Vector2f size) : size(size), rect(size){};

Box::Box(float width, float height) : size(width, height), rect(size){};

Box::Box(sf::Vector2f pos, sf::Vector2f size) : pos(pos), size(size){};

void Box::draw(sf::RenderTarget& rTarget, sf::RenderStates rStates) const 
{
    rTarget.draw(rect, sf::RenderStates::Default);
};

void Box::SetPos(float x, float y)
{
    rect.setPosition(x, y);
};

void Box::Update()
{
};