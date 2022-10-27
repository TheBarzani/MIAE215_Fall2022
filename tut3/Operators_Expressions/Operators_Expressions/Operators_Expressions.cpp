// MIAE-215 Tutorial 3
// Author: Ismael Ridha
// Examples of using operators in the form expressions 
// 10-06-2022

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Arithmetic operators
    int num1 = 5;
    //cout << num1 % 7  << endl;
    int num2 = num1;
    //cout << num2++ << endl;
    //cout << num2 << endl;

    // Assignment operators
    int num3 = 7;
    // cout << (num3 *= 10) << endl; // num3 = num3*10
    // cout << (num3 += num3) << endl; // num3 = num3+num3

    // Comparison & logical operators

    int num4 = 5;
    /*cout << "Is num4 = 5 equal to num3 = 7 : " << (num4 == num3) << endl;
    cout << "Is num4 = 5 equal to num1 = 5 : " << (num4 == num1) << endl;*/
    //cout << "Is num4 = 5 not equal to num3 = 7 : " << !(num4 == num3) << endl;
    //cout << "Is num4 = 5 not equal to num1 = 5 : " << !(num4 == num1) << endl;



    // Bitwise Operators
    //int num5 = 8 << 1;
    //cout << num5 << endl;

    // Selcting a digit (2 methods)
    int num = 321;
    // using strings
    
    string str = to_string(num);
    char c = str[1];
    //cout << c << endl;
    

    // using arithmetic (easier & simpler)
    //cout << (num % 100) / 10 << endl;


    return 0;
}


