// Tutorial 4
// @Author: Ismael Ridha
// Conditional output using if statement vs switch blocks 
// 13-10-2022

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // Problem: output elevators moving direction through user input
    // We have 12 floors

    const int num_floor = 12;
    char user_choice;
    int curr_floor;
    int elev_floor = 3;
    cout << "Which floor are you at: ";
    cin >> curr_floor;
    cout << "Input 'u' for up and 'd' for down: ";
    cin >> user_choice;

    switch (user_choice) {
    case 'u':
        cout << "The user wants to go up." << endl;
        if ((curr_floor - elev_floor) > 0) {
            cout << "The elevator needs to go up by " << curr_floor - elev_floor << " floors." << endl;
        }
        else {
            cout << "The elevator needs to go down by " << elev_floor - curr_floor << " floors." << endl;
        }
        break;
    case 'd':
        cout << "The user wants to go down." << endl;
        if ((curr_floor - elev_floor) > 0) {
            cout << "The elevator needs to go up by " << curr_floor - elev_floor << " floors." << endl;
        }
        else {
            cout << "The elevator needs to go down by " << elev_floor - curr_floor << " floors." << endl;
        }
        break;
    // default: 
    //     cout << "invalid option!"<<endl;
    //     return 0;
        
    }

    // Special trick for absoulte value using expressions
    
    // Source: https://stackoverflow.com/questions/9772348/get-absolute-value-without-using-abs-function-nor-if-statement

    // else if (!(curr_floor != elev_floor)) {
    //     cout << "The elevator does not need to move!"<< endl;

}
