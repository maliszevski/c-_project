#pragma once
#include <string>

class Relay{
private:
    std::string name;
    bool state;

public:
    Relay(const std::string &relay_name);

    bool toggle();
    bool turn_off();
    bool get_state() const;
};