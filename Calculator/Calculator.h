//
// Created by charm on 14/11/2023.
//

#ifndef SFML_PROJECT_CALCULATOR_H
#define SFML_PROJECT_CALCULATOR_H

#include "Background.h"
#include "Display.h"
#include "Button.h"
#include "rpn.h"
#include <SFML/Graphics.hpp>
#include <iostream>

class Calculator : public sf::Drawable, public States{
private:
    Background background;
    std::vector<Button> button;
    Display display;
    std::string keys[20] = {"C", " ", " ",  "^", "7", "8", "9", "/", "4", "5", "6", "*", "1", "2", "3", "-", "0", " ", "=", "+"};
    void updateDisplay(const std::string text);

public:
    Calculator();
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    void eventHandler(sf::RenderWindow& window, sf::Event event);
};
#endif //SFML_PROJECT_CALCULATOR_H
