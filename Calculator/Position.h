//
// Created by charm on 14/11/2023.
//

#ifndef SFML_PROJECT_POSITION_H
#define SFML_PROJECT_POSITION_H

#include <SFML/Graphics.hpp>
#include <cmath>

class Position{
private:
    
public:
    template<typename T, typename S>
    static void left(const T& constObject, S& object, float spacing = 0);

    template<typename T, typename S>
    static void right(const T& constObject, S& object, float spacing = 0);

    template<typename T, typename S>
    static void top(const T& constObject, S& object, float spacing = 0);

    template<typename T, typename S>
    static void below(const T& constObject, S& object, float spacing = 0);

    template<typename T>
    static void centerText(const T &obj, sf::Text &text);
};

#include "Position.cpp"
#endif //SFML_PROJECT_POSITION_H
