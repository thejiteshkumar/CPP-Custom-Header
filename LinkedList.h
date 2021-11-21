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

    void insertNode(int);
    Node* insertAtSpecific(Node *head,int,int);
    void display();
};

// void LinkedList::insertAtBeginning(int data){
//     Node *temp = new Node(data);

//     temp->next = head;
// }b

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

/**
 * @brief This function insert the provided value at a given position in a linked list. 
 * 
 * @param head starting point of linked list.
 * @param pos position to be inserted.
 * @param data value to be inserted.
 * @return Node* 
 */
Node* LinkedList::insertAtSpecific(Node *head,int pos,int data){
    Node *temp = new Node(data);

    if(pos==1){
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    for (int i = 1; i <= pos - 2 and curr != NULL;i++){
        curr = curr->next;
    }
    if(curr==NULL)
        return head;
    temp->next = curr->next;
    curr->next = temp;

    return head;
}
