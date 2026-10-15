#pragma once
#include <array>
#include <relay.h>
#include <input.h>

void print_menu();
void print_IO_menu(const std::array<Relay, 3> &relays, const std::array<Input, 3> &inputs);
void clear_screen();
void delay_ms(u_int32_t milliseconds);
int get_user_choice();