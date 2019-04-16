#include<iostream>
#include "List.h"
using namespace std;

List::List()
{
    head=NULL;
    tail=NULL;
}



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  createnode
 *  Description:  Create a new node by requesting memory and linking all the
 *  corresponding pointers in the linked list
 * =====================================================================================
 */
void List::createnode(int value)
{
    // Create a new node from the HEAP
    node *temp = new node;
    temp->data = value;
    temp->next = NULL;
    // Connect the nodes
    if(head == NULL) // first node
    {
        head = temp;
        tail = temp;
        temp = NULL;
    }
    else  // second or more nodes
    {
        tail->next = temp;
        tail = temp;
    }
    return;
}


void List::display()
{
    return;
}


void List::insert_start(int value)
{
    return;
}


void List::insert_position(int pos, int value)
{
    return;
}


void List::delete_first()
{
    return;
}


void List::delete_last()
{
    return;
}


void List::delete_position(int pos)
{
    return;
}
