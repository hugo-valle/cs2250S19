/*
 * =====================================================================================
 *
 *       Filename:  movie_list.cpp
 *
 *    Description:  Create a movie list program. Loads information from txt file
 *                  then, it presents the user with a menu to interact with the data.
 *
 *        Version:  1.0
 *        Created:  04/09/2019 09:41:40 AM
 *       Revision:  none
 *       Compiler (C++):  g++ movie_list.cpp Movie.cpp -o movie_list.out
 *          Usage:  ./movie_list.out 
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
// For C++ Code
#include <iostream>
#include <iomanip>      // pretty output
#include <vector>       // for vectors
#include <string>       // for strings
#include <fstream>      // for file stream
#include <sstream>      // to read strings with spaces
#include "Movie.h"
using namespace std;
// Constants and Globals
const string movie_file = "movies.txt";
// Function Prototypes
void display_menu();
vector<Movie> read_movies_from_file();
// Main Function
int main(int argc, char* argv[])
{
    cout << "The Movie List program\n" << endl;
    display_menu();
    vector<Movie> movies = read_movies_from_file();

    return 0;
}
// Function Defenitions
vector<Movie> read_movies_from_file()
{
    vector<Movie> movies;
    // Read file
    ifstream input_file(movie_file);
    if(input_file) // if file opened successfully
    {
        string line; 
        while(getline(input_file, line))
        {
            stringstream ss(line);  // read the line and cast it as string
            // Now ready to parse the line
            string title;
            int year, stars;
            getline(ss, title, ','); // read title until you get a \t
            ss >> year >> stars;        // get year and stars
//            cout << title << " year=" << year << " stars=" << stars << " extra "<< endl; // TODO Debug 
            // Create and add movie object to vector
            movies.push_back(Movie(title, year, stars));
        } // end of loop over file
        input_file.close(); // close file
    }// end of if statement

    return movies;
}
void display_menu()
{
    cout << "COMMANDS" << endl
        << "v - View movie list" << endl
        << "a - Add a movie" << endl
        << "d - Delete a movie" << endl
        << "x - Exit" << endl << endl;
}


