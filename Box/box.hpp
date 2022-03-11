#ifndef BOX_HPP
#define BOX_HPP

#include "SFML/Graphics.hpp"

class Box : sf::Drawable
{
public:
    virtual void draw(sf::RenderTarget& rtarget, sf::RenderStates states) const;
    
    void UpdatePosition(sf::Vector2f position);
private:
    sf::RectangleShape rect;
};

#endif