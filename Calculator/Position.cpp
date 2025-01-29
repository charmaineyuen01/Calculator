//
// Created by charm on 14/11/2023.
//

#ifndef SFML_PROJECT_POSITION_CPP
#define SFML_PROJECT_POSITION_CPP

#include "Position.h"

template<typename T, typename S>
void Position::left(const T &constObject, S &object, float spacing) {
    sf::FloatRect cb = constObject.getGlobalBounds();
    sf::FloatRect ob = object.getGlobalBounds();
    float x = cb.left - spacing - ob.width;
    float y = cb.top;
    object.setPosition({x,y});
}

template<typename T, typename S>
void Position::right(const T &constObject, S &object, float spacing) {
    sf::FloatRect cb = constObject.getGlobalBounds();
    sf::FloatRect ob = object.getGlobalBounds();
    float x = cb.left + spacing + cb.width;
    float y = cb.top;
    object.setPosition({x,y});
}

template<typename T, typename S>
void Position::top(const T &constObject, S &object, float spacing) {
    sf::FloatRect cb = constObject.getGlobalBounds();
    sf::FloatRect ob = object.getGlobalBounds();
    float x = cb.left;
    float y = cb.top + spacing + ob.height;
    object.setPosition({x,y});
}

template<typename T, typename S>
void Position::below(const T &constObject, S &object, float spacing) {
    sf::FloatRect cb = constObject.getGlobalBounds();
    sf::FloatRect ob = object.getGlobalBounds();
    float x = cb.left;
    float y = cb.top + cb.height + spacing;
    object.setPosition({x,y});
}

template<typename T>
void Position::centerText(const T &obj, sf::Text &text){
    //Get the width and height for the text.
    sf::FloatRect textRect = text.getGlobalBounds();
    //Get the width and height for the object (circle).
    sf::FloatRect tRect = obj.getGlobalBounds();
    //Get the point that is the center of the text.
    sf::Vector2f center = {textRect.width/2.0f, textRect.height/2.f};
    sf::Vector2f localBounds = {center.x + text.getLocalBounds().left, center.y + text.getLocalBounds().top};
    sf::Vector2f rounded = {std::round(localBounds.x), std::round(localBounds.y)};
    text.setOrigin(rounded);
    text.setPosition({tRect.left + tRect.width/2, tRect.top + tRect.height/2});
}

#endif