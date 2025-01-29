//
// Created by charm on 14/11/2023.
//

#include <iostream>
#include "Button.h"
#include "MouseEvent.h"

Button::Button()
: Button("C"){}

Button::Button(const std::string text)
: Button(text, 10.f){}

Button::Button(const std::string text, float radius)
: Button(text, radius, Font::getFont(ARIAL)){}

Button::Button(const std::string text, float radius, sf::Font& font){
    setupCircle(radius);
    setupText(text, font);
}

void Button::setupCircle(float radius) {
    button.setRadius(radius);
    button.setFillColor(defaultColor);
}

void Button::setupText(const std::string &text, sf::Font &font) {
    this->buttonNumber.setFont(font);
    this->buttonNumber.setString(text);
    setCharacterSize();
    Position::centerText(button, this -> buttonNumber);
}

void Button::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    if(!getState(HIDDEN)){
        states.transform = button.getTransform();
        window.draw(button);
        window.draw(buttonNumber, states);
    }
}

void Button::setRadius(float radius) {
    button.setRadius(radius);
    setCharacterSize();
    Position::centerText(button, buttonNumber);
}

void Button::setText(const std::string &text) {
    this->buttonNumber.setString(text);
    Position::centerText(button, buttonNumber);
}

std::string Button::getText() {
    return buttonNumber.getString();
}

void Button::setDefaultColor(sf::Color color) {
    defaultColor = color;
}

void Button::setClickColor(sf::Color color) {

}

void Button::setFont(sf::Font &font) {

}

void Button::setPosition(sf::Vector2f position) {
    button.setPosition(position);

}

void Button::eventHandler(sf::RenderWindow &window, sf::Event event) {
    if(MouseEvents::isClicked(button,window)){
        enableState(CLICKED);
    }
    else
        disableState(CLICKED);
}

void Button::update(){
    if(getState(CLICKED))
        button.setFillColor(clickColor);
    else
        button.setFillColor(defaultColor);
}

void Button::setCharacterSize(){
    unsigned int size = (2.f/3)* 2 * button.getRadius();
    this->buttonNumber.setCharacterSize(size);
    Position::centerText(button, buttonNumber);
}

sf::FloatRect Button::getGlobalBounds() const {
    return button.getGlobalBounds();
}

