//
// Created by charm on 21/11/2023.
//

#ifndef SFML_PROJECT_MOUSEEVENT_H
#define SFML_PROJECT_MOUSEEVENT_H
#include <SFML/Graphics.hpp>

namespace MouseEvents {
    template <typename T>
    bool isHovered(const T& obj, sf::RenderWindow& window);
    template <typename T>
    bool isClicked(const T& obj, sf::RenderWindow& window);
};

#include "MouseEvent.cpp"
#endif //SFML_PROJECT_MOUSEEVENT_H
