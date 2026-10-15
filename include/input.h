#pragma once
#include <string>

class Input{
private:
    std::string name;
    const bool &state;

public:
    Input(const std::string &input_name, const bool &output_state);

    bool get_state() const; 
    const std::string& get_name() const;

};