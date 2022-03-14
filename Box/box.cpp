#include "box.hpp"

Box::Box(): collider(), rect(){};
Box::Box(sf::Vector2f size) : collider(sf::Vector2f(0,0), size), rect(size){};
Box::Box(sf::Vector2f position, sf::Vector2f size):collider(position, size), rect(size) {rect.setPosition(position);};

void Box::UpdatePosition(sf::Vector2f position)
{
    collider.UpdateBounds(position);
    rect.setPosition(position);
};

bool Box::HasCollision(Collider& other)
{
    if(collider.Intersects(other))
    {
        return true;
    };

    return false;
}

void Box::SetColor(sf::Color c)
{
    rect.setFillColor(c);
}

void Box::draw(sf::RenderTarget& rtarget, sf::RenderStates states) const
{
    rtarget.draw(rect, states);
};
