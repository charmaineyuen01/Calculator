//
// Created by charm on 20/11/2023.
//

#ifndef SFML_PROJECT_FONT_H
#define SFML_PROJECT_FONT_H

#include <SFML/Graphics.hpp>
#include <map>
#include "FontEnum.h"

class Font {
private:
    inline static std::map<FontEnum, sf::Font> fonts;
    static std::string getPath(FontEnum font);
    static void loadFont(FontEnum font);

public:
    static sf::Font& getFont(FontEnum font);
};

#endif //SFML_PROJECT_FONT_H
