/*
 * =====================================================================================
 *
 *       Filename:  Movie.cpp
 *
 *    Description:  Movie Class
 *
 *        Version:  1.0
 *        Created:  04/04/2019 09:38:40 AM
 *       Revision:  none
 *       Compiler (C++):  g++ Movie.cpp -o Movie.out -lm
 *          Usage:  ./Movie.out 
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
// For C++ Code
#include <iostream>
#include <iomanip>  // more cout options
#include "Movie.h"
using namespace std;

// Default constructor
Movie::Movie()
{
    title = "Nada";
    year = 1888;
}

Movie::Movie(string title, int year)
{
    set_title(title);
    set_year(year);
}

// Destructor
Movie::~Movie()
{
    cout << "Destroying Object" << endl;
}

Movie::Movie(string title)
{
    set_title(title);
    set_year(1888);
}
// Print info
void Movie::info()const
{
    int w = 10;
    cout << left
        << setw(w*3) << "TITLE"
        << setw(w) << "YEAR" << endl;
    cout << setw(w*3) << get_title()
        << setw(w) << get_year() << endl;
}
// Function Definitions
void Movie::set_title(string set_title)
{
//    this->title = set_title;  // optional
    title = set_title;
}

void Movie::set_year(int year)
{
    if (year < 1888)
    {
        throw invalid_argument("Year must be 1888 or later.");
    }
    // this-> refers to yourself
    // required because of the same name
    this->year = year;
}

// Define Getters
string Movie::get_title() const
{
    return title;
}
        
int Movie::get_year() const
{
    return year;
}

