#include "box.hpp"

Box::Box(sf::Vector2f widthHeight) : widthHeight(widthHeight), rect(widthHeight){};

Box::Box(float width, float height) : widthHeight(width, height), rect(widthHeight){};

void Box::draw(sf::RenderTarget& rTarget, sf::RenderStates rStates) const 
{
    rTarget.draw(rect, sf::RenderStates::Default);
};