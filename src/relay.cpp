#include "../include/relay.h"
#include <iostream>

//Relay::Relay(const std::string &relay_name){
//    name = relay_name;
//    state = false;
//}

Relay::Relay(const std::string &relay_name) : name(relay_name), state(false)
{

}

bool Relay::toggle() {
    state = !state;
    return state;
}

bool Relay::turn_off() {
    state = false;
    return state;
}

bool Relay::get_state() const {
    return state;
}