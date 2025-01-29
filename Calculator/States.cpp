//
// Created by charm on 16/11/2023.
//

#include "States.h"

States::States() {
    for (int i = 0; i < LAST_STATE; ++i) {
        states[static_cast<StatesEnum>(i)] = false;
    }
}

void States::disableState(StatesEnum state) {
    states[state] = false;
}

void States::enableState(StatesEnum state) {
    states[state] = true;
}

void States::toggleState(StatesEnum state) {
    states[state] = !states[state];
}

bool States::getState(StatesEnum state) const {
    return states.at(state);
}
