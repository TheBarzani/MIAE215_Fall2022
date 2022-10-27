// MIAE-215 
// Tutorial 5
// Arithmatics
// Author: Ismael Ridha

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Prototype: to list yout functions
int power1(int , int ); //this function returns a number raised to anothe rnumber 


int main()
{
    // Reminder
    //int a = 11;
    //int b = 3;
    //// (a / b)*b = 9
    //cout << (a - (a / b)*b);
    //cout << endl  << a % b;

    // Exponents
    /*int a = 2;
    int b = 5;

    cout << a * a * a * a * a << endl;
    int c = a;
    for (int i = 1; i < b; i++) {
        c *= a;
    }

    cout << c << endl;

    cout << pow(a, b);*/
    /*cout << power1(2, 5);*/

    // Parity check
    /*int a = 5;
    int b = 6;

    if (b%2) {
        cout << a << " is odd" << endl;
    }
    else {
        cout << b << " is even" << endl;
    }*/


    // Multiplication and division by 2 without math
    //int a = 5;
    //cout << (a >> 1); // divide by 2
    //cout << (a << 1); // multiply by 2

    // Swapping numbers
    /*int a = 5;
    int b = 6;
    cout << a << endl << b << endl;*/
    /*int temp = a; 
    a = b;
    b = temp;*/

    /*a ^= b;
    b ^= a;
    a ^= b;*/

    /*cout << endl << a << endl << b;*/


    // Absolute value
    /*int a;
    cin >> a;*/

    // cout << "absolute: " << abs(a);
    // cout << "absolute: " << (a * ((a>0) - (a<0)));

    // sizeof for data type
    /*int a = 10;
    cout << sizeof(a);*/


    //int arr[11]; // int size is byte
    //cout << sizeof(arr)/sizeof(int);

    // Memory address
    /*int a = 10;
    cout << &a;*/

    // cmath functions
    
    cout << setprecision(38)<< FLT_MAX;

}


int power1(int a, int b) {
    int c = a;
    for (int i = 1; i < b; i++) {
        c *= a;
    }
    return c;
}
