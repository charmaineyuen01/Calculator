//
// Created by charm on 16/11/2023.
//

#ifndef SFML_PROJECT_STATES_H
#define SFML_PROJECT_STATES_H
#include <map>
#include "StatesEnum.h"

class States {
private:
    std::map<StatesEnum, bool> states;

public:
    States();
    void disableState(StatesEnum state);
    void enableState(StatesEnum state);
    void toggleState(StatesEnum state);
    bool getState(StatesEnum state) const;
};


#endif //SFML_PROJECT_STATES_H
