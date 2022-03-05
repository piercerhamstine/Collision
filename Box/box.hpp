#ifndef BOX_HPP
#define BOX_HPP

#include "SFML/Graphics.hpp"
#include "../AABB/collider.hpp"


class Box : public sf::Drawable
{
public:
    Box(sf::Vector2f size);
    Box(float width, float height);
    Box(sf::Vector2f pos, sf::Vector2f size);
    void Update();
    void SetPos(float x, float y);

    Collider collider;
private:
    sf::Vector2f pos;
    sf::Vector2f size;
    sf::RectangleShape rect;

    virtual void draw(sf::RenderTarget& rTarget, sf::RenderStates rStates) const;
};

#endif