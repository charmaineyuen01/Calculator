//
// Created by charm on 14/11/2023.
//

#ifndef SFML_PROJECT_DISPLAY_H
#define SFML_PROJECT_DISPLAY_H

#include <SFML/Graphics.hpp>
#include "font.h"
#include "States.h"

class Display : public sf::Drawable, public States {
private:
    sf::Text text;
    sf::RectangleShape box;
    int limit;
    Display(sf::Vector2f size, sf::Font& font, unsigned int characterSize, sf::Color color, sf::Vector2f position, unsigned int limit);

public:
    Display();
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    void show();
    void clear();
    void setText(const std::string &text);
    std::string getText();
    void setCharacterLimit(unsigned int limit);
    void setColor(sf::Color color);
    void setFont(sf::Font& font);
    void setSize(sf::Vector2f size);
    void setPosition(sf::Vector2f position);
    void setCharacterSize(unsigned int size);
    std::string concatString(const std::string& text);
    void setTextPosition(sf::Vector2f position);
    void setTextColor(sf::Color color);
};


#endif //SFML_PROJECT_DISPLAY_H
