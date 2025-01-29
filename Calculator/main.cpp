#include <iostream>
#include <SFML/Graphics.hpp>

#include "Calculator.h"
int main()
{
    sf::RenderWindow window({480, 700}, "Calculator");
    window.setFramerateLimit(60);

    Calculator calculator;
    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            if(sf::Event::Closed == event.type)
                window.close();
            calculator.eventHandler(window, event);
        }

        //  b.update();
        window.clear();
        window.draw(calculator);
        window.display();
    }
    return 0;
}