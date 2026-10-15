#include <iostream>
#include <array>
#include "../include/relay.h"
#include "../include/input.h"
#include "../include/console_interface.h"

int main() {
    // Relay objects initialization. By default they are set to OFF (state = false)
    // Relays are named "1", "2", "3" (std::string) and their state is set default to OFF at the beginning.
    std::array<Relay, 3> relays = {
        Relay("1"),
        Relay("2"), 
        Relay("3")
    }; 

    //Input objects initialization. Each Input has the same name corresponding to Relay name and holds a reference to its state.
    std::array<Input, 3> inputs = {
        Input("1", relays[0].get_state()),
        Input("2", relays[1].get_state()),
        Input("3", relays[2].get_state())
    };

    //For testing purposes.
    //relays[0].toggle(); 

    //This bool is holding the whole program in a loop.
    bool running = true;


    while (running) {
        clear_screen();
        print_IO_menu(relays, inputs);
        std::cout << "             Your choice: " << std::endl;
        int choice = get_user_choice();
        switch (choice) {
            case 1:
            

            default:
            delay_ms(500);
            break;
        }
        
    } 


    //For testing purposes. 
    /* for (size_t i = 0; i < inputs.size(); i++) {
        if (inputs[i].get_state() == true) {
            std::cout << "INPUT " << i + 1 << " STATE ON " << std::endl; 
        } else {
            std::cout << "INPUT " << i + 1 << " STATE OFF" << std::endl;
        }
    }
    */

    /* bool running = true;
    
    while (running) { 
        print_menu();
        int user_choice = get_user_choice();
            switch (user_choice) {
                case 1:
                case 2:
                case 3: {
                    int index = user_choice - 1;
                    if (relays[index].get_state() == true ) {
                        std::cout << "R" << index + 1 << " already ON." << std::endl;
                    } else {
                        std::cout << "R" << index + 1 << " choosen." << std::endl;
                        relays[index].toggle();
                        relays[index].get_state();
                        std::cout << "R" << index + 1 << " state ON." << std::endl;
                    }
                    break;
                }
                case 4:
                    for (size_t i = 0; i < relays.size(); i++) {
                        if (relays[i].get_state() == true) {
                            std::cout << "R" << i + 1 << " state ON." << std::endl;
                        } else {
                            std::cout << "R" << i + 1 << " state OFF." << std::endl;
                        }
                    }
                    break;

                case 5: {
                    std::cout << "Which output to disable (1-3)?" << std::endl;
                    int relay_to_disable = get_user_choice();

                    if (relay_to_disable >= 1 && relay_to_disable <= 3) {
                        auto& relay = relays[relay_to_disable -1];

                        if (relay.get_state() == true) {
                            relay.turn_off();
                            std::cout << "R" << relay_to_disable << " disabled." << std::endl;
                        } else {
                            std::cout << "R" << relay_to_disable << " already OFF" << std::endl;
                        }
                    } else {
                        std::cout << "Invalid output number, please try again." << std::endl;
                    }
                    
                    
                    

                  
                }
                    break;
            
                default:
                    std::cout << "Exiting program..." << std::endl;
                    running = false;
                    break;
    }
}
    */
}



