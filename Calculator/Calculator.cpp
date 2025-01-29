//
// Created by charm on 14/11/2023.
//
#include "Calculator.h"

Calculator::Calculator() {
    display.setSize({450, 120});
    display.setColor({184, 192, 207});

    for(int i=0; i<20; i++)
    {
        Button b;
        b.setRadius(50);
        button.push_back(b);
        button.back().setText(keys[i]);
        if(i == 0)
            button.back().setPosition({20,150});
    }

    for (int i = 1; i < 20; i++)
    {
       if (i % 4 == 0)
            Position::below(button[i-4], button[i], 8);
       else
            Position::right(button[i-1], button[i], 15);

    }
    updateDisplay("");
}

void Calculator::eventHandler(sf::RenderWindow &window, sf::Event event) {
    for(auto& i : button)
    {
        i.eventHandler(window, event);
        if(MouseEvents::isClicked(i,  window)){
            enableState(CLICKED);
            if (i.getText() == "C"){
                display.clear();
            }
            else if(i.getText() == "="){
                float temp = RPN::evaluate(display.getText());
                display.clear();
                updateDisplay(std::to_string(temp));
            }
            else{
                updateDisplay(i.getText());
            }
        }
        else{
            disableState(CLICKED);
        }
        i.update();
    }
}

void Calculator::updateDisplay(const std::string text){
    display.concatString(text);
    display.setTextPosition({20,30});
    display.setTextColor(sf::Color::Black);
}


void Calculator::draw(sf::RenderTarget& window, sf::RenderStates states) const{
    window.draw(display, states);
    for (const auto& i : button) {
        window.draw(i);
    }
}