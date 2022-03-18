#ifndef BOX_HPP
#define BOX_HPP


#include "SFML/Graphics.hpp"
#include "../AABB/collider.hpp"

class Box : public sf::Drawable
{
public:
    Box();
    Box(sf::Vector2f size);
    Box(sf::Vector2f pos, sf::Vector2f size);

    bool HasCollision(Box& other);
    
    void UpdatePosition(sf::Vector2f position);

    void SetColor(sf::Color c);
private:
    virtual void draw(sf::RenderTarget& rtarget, sf::RenderStates states) const;
    Collider collider;
    sf::RectangleShape rect;
};

#endif