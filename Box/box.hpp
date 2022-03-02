#ifndef BOX_HPP
#define BOX_HPP

#include "SFML/Graphics.hpp"
//#include "AABB/collider.hpp"


class Box : public sf::Drawable
{
public:
    Box(sf::Vector2f widthHeight);
    Box(float width, float height);

private:
    sf::Vector2f widthHeight;
    //Collider collider;
    sf::RectangleShape rect;

    virtual void draw(sf::RenderTarget& rTarget, sf::RenderStates rStates) const;
};

#endif