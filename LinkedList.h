/*

*/

template <class T>
class Node
{

public:
    T data;
    Node *next;

    //default constructor
    Node()
    {
        data = 0;
        next = nullptr;
    }

    //param constructor
    Node(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};

template <class T>
class LinkedList
{
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    void insertAtBeginning(int);
    void insertAtEnd(int);
    void insertAtSpecific();
    void display();
};
