//
// Created by charm on 14/11/2023.
//

#include "Display.h"

Display::Display(sf::Vector2f size, sf::Font& font, unsigned int characterSize, sf::Color color, sf::Vector2f position, unsigned int limit){
    setSize(size);
    setFont(font);
    setCharacterSize(characterSize);
    setColor(color);
    setPosition(position);
    setCharacterLimit(limit);
}

Display::Display()
: Display({200, 100}, Font::getFont(ARIAL), 24, sf::Color::Black, {15,15}, 9){
}

void Display::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    //todo after states, draw only if not hidden
    if(!getState(HIDDEN)){
        window.draw(box);
        window.draw(text);
    }
}

void Display::show() {
    //todo after states is created
    disableState(HIDDEN);
}

void Display::clear() {
    text.setString("");
}

void Display::setText(const std::string &text) {
    this-> text.setString(text);
}

std::string Display::getText() {
    return text.getString();
}

void Display::setCharacterLimit(unsigned int limit) {
    this -> limit = limit;
}

void Display::setColor(sf::Color color) {
    box.setFillColor(color);
}

void Display::setFont(sf::Font &font) {
    text.setFont(font);
}

void Display::setSize(sf::Vector2f size) {
    box.setSize(size);
}

void Display::setPosition(sf::Vector2f position) {
    box.setPosition(position);
    //todo center text with position class
}

void Display::setCharacterSize(unsigned int size) {
    text.setCharacterSize(size);
}

std::string Display::concatString(const std::string& addtext){
    std::string result = text.getString() + addtext;
    text.setString(result);
    return text.getString();
}

void Display::setTextPosition(sf::Vector2f position){
    text.setPosition(position);
}

void Display::setTextColor(sf::Color color){
    text.setFillColor(color);
}
