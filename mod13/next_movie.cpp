/*
 * =====================================================================================
 *
 *       Filename:  _movie.cpp
 *
 *    Description:  Continue to use the Movie library
 *
 *        Version:  1.0
 *        Created:  04/09/2019 08:40:08 AM
 *       Revision:  none
 *       Compiler (C++):  g++ next_movie.cpp Movie.cpp -o next_movie.out
 *          Usage:  ./next_movie.out 
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
// For C++ Code
#include <iostream>
using namespace std;
#include "Movie.h"

// Main Function
int main(int argc, char* argv[])
{
    // Create object with default values
    Movie m1;
    m1.info();
    // Create object with some values
    Movie m2("Rambo", 1991);
    m2.info();
    // Create object with one set value, and a default value
    Movie m3("Superman");
    m3.info();

    return 0;
}
// Function Defenitions


