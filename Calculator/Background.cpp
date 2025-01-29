//
// Created by charm on 14/11/2023.
//

#include "Background.h"

Background::Background() {
    Background({100,200});
}

Background::Background(sf::Vector2f size)
: sf::RectangleShape(size), States(){

}

void Background::eventHandler(sf::RenderWindow &window, sf::Event event) {
    sf::Vector2f mpos = (sf::Vector2f) sf::Mouse::getPosition(window);
    if(getGlobalBounds().contains(mpos)){
        enableState(HOVERED);
    }
    else{
        disableState(HOVERED);
    }
}

void Background::update() {
    Shape::update();
}
