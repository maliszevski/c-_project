#include <iostream>
#include <string>
#include "../include/relay.h"
#include <array>

void print_menu();
int get_user_choice();


int main() {
    std::array<Relay, 3> relays = { Relay("1"), Relay("2"), Relay("3") };
    bool running = true;
    
    while (running) { 
        print_menu();
    
            switch (get_user_choice()) {
                case 1:
                    std::cout << "R1 choosen." << std::endl;
                    relays[0].toggle();
                    relays[0].show_state();
                    break;

                case 2:
                    std::cout << "R2 choosen." << std::endl;
                    relays[1].toggle();
                    relays[1].show_state();
                    break;

                case 3:
                    std::cout << "R3 chosen." << std::endl;
                    relays[2].toggle();
                    relays[2].show_state();
                    break;

                case 4:
                    for (int i = 0; i < relays.size(); i++) {
                        relays[i].show_state();
                    }
                    break;

                case 5: {
                    std::cout << "Which output to disable (1-3)?" << std::endl;
                    int output_to_disable = get_user_choice();
                }

                default:
                    std::cout << "Exiting program..." << std::endl;
                    running = false;
            }
    }
}



//Prints text menu.
void print_menu(){ 
        std::cout << "*********************************" << std::endl;
        std::cout << "*         Choose output:        *" << std::endl;
        std::cout << "* 1.             R1             *" << std::endl;
        std::cout << "* 2.             R2             *" << std::endl;
        std::cout << "* 3.             R3             *" << std::endl;
        std::cout << "* 4.      Show output state     *" << std::endl;
        std::cout << "* 5.        Disable output      *" << std::endl;
        std::cout << "*********************************" << std::endl;
        std::cout << "           Your choice:          " << std::endl;
}


//This function is getting user choice to control switch loop.
//If user enters invalid value, the cin.fail() returns true and it will be repeating until user enters correct value (int).
//Then, cin.clear(); is clearing cin error state due to invalid value.
//Finally, cin.ignore(); is clearing invalid input (max 100 chars or up to the newline char.)
int get_user_choice(){
    int user_choice;

    while (true) {
        std::cin >> user_choice;
        if (std::cin.fail()){
            std::cout << "Invalid input. Try again." << std::endl;
            std::cin.clear();
            std::cin.ignore(100, '\n');
        } else {
            std::cin.ignore(100, '\n');
            return user_choice;
        }
    }
}

