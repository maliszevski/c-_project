#include <iostream>
#include <string>


void turn_off_output(bool &r_state, const std::string &name);
void print_menu();
int get_user_choice();
void show_output_state(bool r_state, const std::string &name);

int main() {
    bool running = true;
    bool r1_state = false;
    bool r2_state = false;
    bool r3_state = false;

    while (running) { 
        print_menu();
    
        switch (get_user_choice()) {
            case 1:
                std::cout << "R1 choosen." << std::endl;
                r1_state = !r1_state;
                show_output_state(r1_state, "1");
                break;

            case 2:
                std::cout << "R2 choosen." << std::endl;
                r2_state = !r2_state;
                show_output_state(r2_state, "2");
                break;

            case 3:
                std::cout << "R3 choosen." << std::endl;
                r3_state = !r3_state;
                show_output_state(r3_state, "3");
                break;

            case 4:
                show_output_state(r1_state, "1");
                show_output_state(r2_state, "2");
                show_output_state(r3_state, "3");
                break;

            case 5: {
                std::cout << "Which output to disable (1-3)?" << std::endl;
                int output_to_disable = get_user_choice();

                if (output_to_disable == 1){
                    turn_off_output(r1_state, "1");
                } else if (output_to_disable == 2) {
                    turn_off_output(r2_state, "2");
                } else if (output_to_disable == 3) {
                    turn_off_output(r3_state, "3");
                } else {
                    std::cout << "Invalid output number!" << std::endl;
                }
                break;
            }

            default:
                std::cout << "Exiting program..." << std::endl;
                running = false;
        }
    }
}

// This function is turning off the original variable by using reference.
void turn_off_output(bool &r_state, const string &name){
    r_state = false;

    std::cout << "R" << name << " state OFF" << std::endl;
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
        cin >> user_choice;
        if (cin.fail()){
            std::cout << "Invalid input. Try again." << std::endl;
            cin.clear();
            cin.ignore(100, '\n');
        } else {
            cin.ignore(100, '\n');
            return user_choice;
        }
    }
}

//Shows output state.
void show_output_state(bool r_state, const string &name){ 
    if (r_state == true ){
        std::cout << "R" << name << " state ON." << std::endl;
    } else {
        std::cout << "R" << name << " state OFF" << std::endl;
    }
}
