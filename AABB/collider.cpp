#include "collider.hpp"

bool Collider::Intersects(const Collider& other)
{
    sf::Vector2f topLeft(colPos);
    sf::Vector2 topRight(colPos.x+colSize.x, colPos.y);
    sf::Vector2 botLeft(colPos.x, colPos.y+colSize.y);
    sf::Vector2 botRight(colPos.x+colSize.x, colPos.y+colSize.y);

    //Conditions For Rectangle Intersect.
    // Ax1 < bx2
    // Ax2 > bx1
    // Ay1 < by2
    // Ay2 > by1

    if(topLeft < )

    return 0;
}