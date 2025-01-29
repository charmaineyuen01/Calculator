//
// Created by charm on 14/11/2023.
//

#ifndef SFML_PROJECT_BUTTON_H
#define SFML_PROJECT_BUTTON_H

#include <SFML/Graphics.hpp>
#include "font.h"
#include "MouseEvent.h"
#include "States.h"
#include "Position.h"

class Button : public sf::Drawable , public States {
private:
    Position pos;
    sf::Text buttonNumber;
    sf::CircleShape button;
    sf::Color defaultColor = {80,80,80}, clickColor = {210, 210, 210};
    void setupCircle(float radius);
    void setupText(const std::string& text, sf::Font& font);
    void setCharacterSize();

public:
    Button();
    Button(const std::string text);
    Button(const std::string text, float radius);
    Button(const std::string text, float radius, sf::Font& font);
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    void setRadius(float radius);
    void setText(const std::string &text);
    std::string getText();
    void setDefaultColor(sf::Color color);
    void setClickColor(sf::Color color);
    void setFont(sf::Font& font);
    void setPosition(sf::Vector2f position);
    void eventHandler(sf::RenderWindow& window, sf::Event event);
    void update();
    sf::FloatRect getGlobalBounds() const;
};


#endif //SFML_PROJECT_BUTTON_H
