#include "../include/input.h"

Input::Input(const std::string &input_name, const bool &output_state)
 : name(input_name), state(output_state)
{

}

bool Input::get_state() const {
    return state;
}

const std::string& Input::get_name() const {
    return name;
}