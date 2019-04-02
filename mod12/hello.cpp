/*
 * =====================================================================================
 *
 *       Filename:  hello.cpp
 *
 *    Description:  First Hello World in C++
 *
 *        Version:  1.0
 *        Created:  04/02/2019 08:49:09 AM
 *       Revision:  none
 *       Compiler (C):    gcc hello.cpp -o hello.out -lm
 *       Compiler (C++):  g++ hello.cpp -o hello.out -lm
 *          Usage:  ./hello.out 
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
// For C++ Code
#include <iostream>
using namespace std;


// Constants and Globals

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    int num;
    // for output use: cout
    cout << "Hello C++" << endl;
    cout << "Enter a number: " << endl;
    // for input use: cin
    cin >> num;
    cout << "You entered: " << num << " number." << endl;

    return 0;
}
// Function Defenitions


