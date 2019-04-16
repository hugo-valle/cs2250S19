/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  A linked list example usage
 *
 *        Version:  1.0
 *        Created:  04/15/2019 06:11:27 PM
 *       Revision:  none
 *       Compiler (C++):  g++ main.cpp List.cpp -o main.out
 *          Usage:  ./link_list.out 
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
// For C++ Code
#include <iostream>
#include "List.h"
using namespace std;
// Constants and Globals

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    List obj;
    obj.createnode(25);
    obj.createnode(99);
    obj.createnode(90);
    obj.createnode(40);
    cout<<"\n--------------------------------------------------\n";
    cout<<"---------------Displaying All nodes---------------";
    cout<<"\n--------------------------------------------------\n";
    obj.display();
    cout<<"\n--------------------------------------------------\n";
    cout<<"-----------------Inserting At End-----------------";
    cout<<"\n--------------------------------------------------\n";
    obj.createnode(55);
    obj.display();
    cout<<"\n--------------------------------------------------\n";
    cout<<"----------------Inserting At Start----------------";
    cout<<"\n--------------------------------------------------\n";
    obj.insert_start(50);
    obj.display();
    cout<<"\n--------------------------------------------------\n";
    cout<<"-------------Inserting At Particular--------------";
    cout<<"\n--------------------------------------------------\n";
    obj.insert_position(5,60);
    obj.display();
    cout<<"\n--------------------------------------------------\n";
    cout<<"----------------Deleting At Start-----------------";
    cout<<"\n--------------------------------------------------\n";
    obj.delete_first();
    obj.display();
    cout<<"\n--------------------------------------------------\n";
    cout<<"-----------------Deleting At End------------------";
    cout<<"\n--------------------------------------------------\n";
    obj.delete_last();
    obj.display();
    cout<<"\n--------------------------------------------------\n";
    cout<<"--------------Deleting At Particular--------------";
    cout<<"\n--------------------------------------------------\n";
    obj.delete_position(4);
    obj.display();
    cout<<"\n--------------------------------------------------\n";
    return 0;
}
