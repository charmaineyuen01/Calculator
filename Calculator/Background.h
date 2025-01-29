//
// Created by charm on 14/11/2023.
//

#ifndef SFML_PROJECT_BACKGROUND_H
#define SFML_PROJECT_BACKGROUND_H

#include <SFML/Graphics.hpp>
#include "States.h"

class Background : public sf::RectangleShape, public States{
public:
    Background();
    Background(sf::Vector2f size);
    void eventHandler(sf::RenderWindow& window, sf::Event event);
    void update();
};


#endif //SFML_PROJECT_BACKGROUND_H
