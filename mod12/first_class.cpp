/*
 * =====================================================================================
 *
 *       Filename:  first_class.cpp
 *
 *    Description:  Let's move from structures to classes
 *
 *        Version:  1.0
 *        Created:  04/02/2019 10:04:48 AM
 *       Revision:  none
 *       Compiler (C++):  g++ first_class.cpp -o first_class.out -lm
 *          Usage:  ./first_class.out 
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
struct Movie
{
    string title = "";          // data member
    int year = 0;               // data member
};
// Function Prototypes
bool Equals(const Movie& my_movie, const Movie& to_compare);  // the address operator is at the end of the name
// Main Function
int main(int argc, char* argv[])
{
    Movie movie;  // create a Movie object
    movie.title = "Batman";  // set title
    movie.year = 2008;      // set year

    cout << "MOVIE DATA" << endl
        << "Title:   " << movie.title << endl
        << "Year:    " << movie.year << endl;
    
    Movie movie2;  // create a Movie object
    movie2.title = "Batman";  // set title
    movie2.year = 2009;      // set year

    cout << "MOVIE DATA" << endl
        << "Title:   " << movie2.title << endl
        << "Year:    " << movie2.year << endl;

    // Test for equal values
    if(Equals(movie, movie2))
    {
        cout << "Movies are equal" << endl;
    }
    else
    {
        cout << "Movies are not equal" << endl;
    }


    return 0;
}
// Function Defenitions
bool Equals(const Movie& my_movie, const Movie& to_compare)
{
    return (my_movie.title == to_compare.title && 
            my_movie.year == to_compare.year);
}


