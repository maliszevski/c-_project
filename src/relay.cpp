#include "include/relay.h"
#include <iostream>

Relay::Relay(const std::string &relay_name){
    name = relay_name;
    state = false;
}

void Relay::toggle() {
    state = !state;
    std::cout << "R" << name << " state ON" << std::endl; 
}

void Relay::turn_off() {
    state = false;
    std::cout << "R" << name << "state OFF" << std::endl;
}

void Relay::show_state() const {
    if (state) {
        std::cout << "R" << name << " state ON." << std::endl;
    } else {
        std::cout << "R" << name << " state OFF." << std::endl;
    }
}

bool Relay::get_state() const {
    return state;
}