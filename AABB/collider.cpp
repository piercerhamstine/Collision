#include "collider.hpp"

Collider::Collider() : colPos(), colSize(), colBounds() {};

Collider::Collider(sf::Vector2f pos, sf::Vector2f size) : colPos(pos), colSize(size), colBounds(pos, size) {}; 

Collider::~Collider(){};

bool Collider::Intersects(const Collider& other)
{
    //Conditions For Rectangle Intersect.
    // Ax1 < bx2
    // Ax2 > bx1
    // Ay1 < by2
    // Ay2 > by1

    int intersect = 0;

    // a.x1 < b.x2
    intersect = (colBounds.topLeft.x < other.colBounds.topRight.x) % 2;
    // a.x2 > b.x1
    intersect = (colBounds.topRight.x > other.colBounds.topLeft.x) % 2;
    // a.y1 < a.y2
    intersect = (colBounds.topLeft.y < other.colBounds.botLeft.y) % 2;
    //a.y2 > b.y1
    intersect = (colBounds.botLeft.y > other.colBounds.topLeft.y) % 2;

    return intersect;
}

void Collider::CollisionResolution(){};

void Collider::UpdatePos(sf::Vector2f newPos)
{
    colPos = newPos;
    colBounds.Update(newPos, colSize);
};

Bounds Collider::GetBounds()
{
    return colBounds;
}