#include "../include/relay.h"

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

const std::string& Relay::get_name() const{
    return name;
}

const bool& Relay::get_state() const {
    return state;
}