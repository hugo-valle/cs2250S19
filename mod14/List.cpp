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
        // Insert at the end of list
        tail->next = temp;
        tail = temp;
    }
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  display
 *  Description:  Display Linked list
 * =====================================================================================
 */
void List::display()
{
    node *temp = new node;
    temp = head;
    while(temp != NULL)
    {
        cout << temp->data << "\t";
        temp = temp->next; // point to next member
    }
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  insert_start
 *  Description:  Insert a node at the begining of 
 *  the list. Remapped your head pointer
 * =====================================================================================
 */
void List::insert_start(int value)
{
    // Create the new node
    node *temp = new node;
    temp->data = value;
    temp->next = head;
    // Set the head pointer
    head = temp;   
    return;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  insert_position
 *  Description:  Inserta at giving index position. 
 *  Then, reconnect the list
 * =====================================================================================
 */
void List::insert_position(int pos, int value)
{
    node *prev = new node;
    node *temp = new node;
    node *cur = new node;

    cur = head; // point to first member
    for(int i = 1; i < pos; i++)
    {
        prev = cur;
        cur = cur->next;
    }
    // Conect prev to curr to the rest
    temp->data = value;
    prev->next = temp;
    temp->next = cur;
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
