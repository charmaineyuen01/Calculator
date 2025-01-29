//
// Created by charm on 20/11/2023.
//

#include "font.h"

std::string Font::getPath(FontEnum font) {
    switch (font) {
        case ARIAL: return "Arial.ttf";
    }
}

void Font::loadFont(FontEnum font) {
    fonts[font].loadFromFile(getPath(font));
}

sf::Font &Font::getFont(FontEnum font) {
    loadFont(font);
    return fonts[font];
}
