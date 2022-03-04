#ifndef BOX_HPP
#define BOX_HPP

#include "SFML/Graphics.hpp"
#include "AABB/collider.hpp"


class Box : public sf::Drawable
{
public:
    Box(sf::Vector2f widthHeight);
    Box(float width, float height);

    void Update();

    Collider collider;
private:
    sf::Vector2f pos;
    sf::Vector2f size;
    sf::RectangleShape rect;

    virtual void draw(sf::RenderTarget& rTarget, sf::RenderStates rStates) const;
};

#endif