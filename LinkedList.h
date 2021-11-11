/*

*/

#include<iostream>
using namespace std;


/**
 * @brief A class which creates each node of a linked list
 * 
 */
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

/**
 * @brief The linked list stores data in sequential storage, like arrays. Though the data are stored sequentially, the memory locations are not contiguous.
 * 
 */
class LinkedList
{
    Node *head;

public:
    /**
     * @brief Default constructor
     * 
     */
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

/**
 * @brief This methods insert the node at the END.
 * 
 * @param data value to be inserted 
 */
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

/**
 * @brief Prints the linked List
 * 
 */
void LinkedList::display(){
    
    while (head!=NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    
}

