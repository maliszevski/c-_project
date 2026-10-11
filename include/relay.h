#pragma once
#include <string>

class Relay{
private:
    std::string name;
    bool state;

public:
    Relay(const std::string &relay_name);

    bool toggle();
    void turn_off();
    void show_state() const;
    bool get_state() const;
};