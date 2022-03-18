#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window/Mouse.hpp>
#include "Box/box.hpp"

sf::RenderWindow window;

sf::Vector2i mousePos;

Box mouseBox;
Box b1;
Box b2;

Box* boxDragged;

void HandleMouseClick(sf::Event& event)
{
    mousePos = sf::Mouse::getPosition(window);

    if(event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Button::Left)
    {
        std::cout << "Left mouse button pressed" << std::endl;

        if(mouseBox.HasCollision(b1))
        {
            boxDragged = &b1;
        }
        else if(mouseBox.HasCollision(b2))
        {
            boxDragged = &b2;
        }
    }

    if(event.type == sf::Event::MouseButtonReleased && boxDragged != nullptr)
    {
        boxDragged->UpdatePosition(sf::Vector2f(mousePos.x, mousePos.y));
        boxDragged = nullptr;
    }
};

int main()
{
    window.create(sf::VideoMode(800, 400), "Collision Detection");

    mouseBox = Box(sf::Vector2f(0, 0), sf::Vector2f(1,1));

    b1 = Box(sf::Vector2f(0, 0), sf::Vector2f(10,10));
    b1.SetColor(sf::Color::White);

    b2 = Box(sf::Vector2f(9,9), sf::Vector2f(10,10));

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            HandleMouseClick(event);
        }

            mouseBox.UpdatePosition(sf::Vector2f(mousePos.x, mousePos.y));
            
            if(boxDragged != nullptr)
            {
                boxDragged->UpdatePosition(sf::Vector2f(mousePos.x, mousePos.y));
            };

            window.clear();
            window.draw(b1);
            window.draw(b2);
            window.display();
    }

    return 0;
}