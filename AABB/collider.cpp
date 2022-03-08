#include "collider.hpp"

Collider::Collider() : size(), bounds() {};

Collider::Collider(sf::Vector2f position, sf::Vector2f size) : size(size), bounds(position, size){};

const Bounds Collider::GetBounds()
{
    return bounds;
};

bool Collider::Intersects(const Collider& other) const
{
    int intersect = 0;

    // Ax1 <  Bx2
    // Ax2 > Bx1
    // Ay1 < By2
    // Ay2 > By1
    
    intersect += (bounds.min.x < other.bounds.max.x);
    intersect += (bounds.max.x > other.bounds.min.x);
    intersect += (bounds.min.y < other.bounds.max.y);
    intersect += (bounds.max.y >  other.bounds.min.y);
    
    return (intersect % 4)==0;
};