#ifndef  LIST__INC__
#define  LIST__INC__

#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;	
};

class List
{
    private:
        // Pointers to node structures
        node *head;
        node *tail;
    public:
        List(); // constructor
        // Other Methods
        void createnode(int value);
        void display();
        void insert_start(int value);
        void insert_position(int pos, int value);
        void delete_first();
        void delete_last();
        void delete_position(int pos);
};

#endif /* ----- #ifndef LIST__INC__ ----- */

