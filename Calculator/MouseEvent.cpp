//
// Created by charm on 21/11/2023.
//

#ifndef SFML_PROJECT_MOUSEEVENT_CPP
#define SFML_PROJECT_MOUSEEVENT_CPP
#include "MouseEvent.h"

template<typename T>
bool MouseEvents::isHovered(const T &obj, sf::RenderWindow &window) {
    sf::Vector2f mpos = (sf::Vector2f) sf::Mouse::getPosition(window);
    return obj.getGlobalBounds().contains(mpos);
}

template<typename T>
bool MouseEvents::isClicked(const T &obj, sf::RenderWindow &window) {
    return isHovered(obj, window) && sf::Mouse::isButtonPressed(sf::Mouse::Left);
}
#endif