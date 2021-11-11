/*

*/

#include<iostream>
using namespace std;
class Node
{

public:
    int data;
    Node *next;

    //default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }

    //param constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList
{
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    //void insertAtBeginning(int);
    void insertNode(int);
    //void insertAtSpecific();
    void display();
};

// void LinkedList::insertAtBeginning(int data){
//     Node *temp = new Node(data);

//     temp->next = head;
// }
void LinkedList::insertNode(int data){
    Node* temp = new Node(data);

    if(head == NULL){
        head = temp;
        return;
    }

    Node *curr = head;
    while(curr->next!=NULL){
        curr = curr->next;
    }
    curr->next = temp;
}
void LinkedList::display(){
    
    while (head!=NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    
}

