#include "box.hpp"

void Box::Draw(sf::RenderTarget& rTarget, sf::RenderStates rStates) const 
{
    rTarget.draw(rect, sf::RenderStates::Default);
};