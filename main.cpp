#include <iostream>
#include <string>
using namespace std;

// This function is turning off the original variable by using reference.
void turn_off_output(bool &r_state, const string &name){
    r_state = false;

    cout << "R" << name << " state OFF" << endl;
}

//Prints text menu.
void print_menu(){ 
        cout << "*********************************" << endl;
        cout << "*         Choose output:        *" << endl;
        cout << "*1.             R1              *" << endl;
        cout << "*2.             R2              *" << endl;
        cout << "*3.             R3              *" << endl;
        cout << "*4.      Show output state      *" << endl;
        cout << "*5.        Disable output       *" << endl;
        cout << "*********************************" << endl;
        cout << "           Your choice:          " << endl;
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
            cout << "Invalid input. Try again." << endl;
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
        cout << "R" << name << " state ON." << endl;
    } else {
        cout << "R" << name << " state OFF" << endl;
    }
}



int main() {
    bool running = true;
    bool r1_state = false;
    bool r2_state = false;
    bool r3_state = false;

    while (running) { 
        print_menu();
    
        switch (get_user_choice()) {
            case 1:
                cout << "R1 choosen." << endl;
                r1_state = !r1_state;
                show_output_state(r1_state, "1");
                break;

            case 2:
                cout << "R2 choosen." << endl;
                r2_state = !r2_state;
                show_output_state(r2_state, "2");
                break;

            case 3:
                cout << "R3 choosen." << endl;
                r3_state = !r3_state;
                show_output_state(r3_state, "3");
                break;

            case 4:
                show_output_state(r1_state, "1");
                show_output_state(r2_state, "2");
                show_output_state(r3_state, "3");
                break;

            case 5: {
                cout << "Which output to disable (1-3)?" << endl;
                int output_to_disable = get_user_choice();

                if (output_to_disable == 1){
                    turn_off_output(r1_state, "1");
                } else if (output_to_disable == 2) {
                    turn_off_output(r2_state, "2");
                } else if (output_to_disable == 3) {
                    turn_off_output(r3_state, "3");
                } else {
                    cout << "Invalid output number!" << endl;
                }
                break;
            }

            default:
                cout << "Exiting program..." << endl;
                running = false;
        }
    }



}


