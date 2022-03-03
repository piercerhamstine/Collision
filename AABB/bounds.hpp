struct Bounds
{
    sf::Vector2f topLeft(colPos);
    sf::Vector2 topRight(colPos.x+colSize.x, colPos.y);
    sf::Vector2 botLeft(colPos.x, colPos.y+colSize.y);
    sf::Vector2 botRight(colPos.x+colSize.x, colPos.y+colSize.y);
    
    sf::Vector2 center;
}