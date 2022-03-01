#ifndef BOX_HPP
#define BOX_HPP

#include "SFML/Graphics.hpp";
#include "AABB/collider.hpp";


class Box : sf::Drawable
{
public:
    Box(float width, float height);
private:
    Collider collider;
    sf::RectangleShape rect;

    virtual void Draw(sf::RenderTarget& rTarget, sf::RenderStates rStates) const;
};

#endif;