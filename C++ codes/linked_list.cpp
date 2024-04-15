#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        //cout << "I am inside default contructor" << endl;
        this->next = NULL;
    }

    Node(int data)
    {
        //cout << "I am inside param constructor" << endl;
        this->data = data;
        this->next = NULL;
    }
};

void createTail(Node *&head, Node *&tail)
{
    Node *temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    //jab ye loop khatam hoga tab aapka temp wala ptr last node par khada hoga
    //tab tail = temp karke tail ko last node par le aao

    tail = temp;
}

void insertAtHead(Node *&head, Node *&tail, int data)
{
    if(head == NULL)
    {
        //empty linked list

        //step1:: create new node
        Node *newNode = new Node(data);

        //step2:: update head
        head = newNode;
        tail = newNode;
    }

    else
    {
        //non empty LL wala case

        //create a node
        Node *newNode = new Node(data);
        //attach the new node to head node
        newNode->next = head;
        //update head
        head = newNode;
    }
    
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    if(head == NULL)
    {
        //create new node
        Node *newNode = new Node(data);

        //update tail and head
        head = newNode;
        tail = newNode;
    }

    else
    {
        //create new node
        Node *newNode = new Node(data);

        //attach tail to new node
        tail->next = newNode;

        //update tail
        tail = newNode;
    }
}

void printLL(Node *head)
{
    Node *temp = head;

    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}

int getLength(Node *head)
{
    int count=0;
    Node *temp = head;

    while(temp!=NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

int main()
{
    //creation of node
    // Node first;     //this is static allocation
    Node *first = new Node(10);  // this is dynamic allocation
    Node *second = new Node(20); // this is dynamic allocation
    Node *third = new Node(30);  // this is dynamic allocation
    Node *forth = new Node(40);  // this is dynamic allocation
    Node *fifth = new Node(50);  // this is dynamic allocation

    first->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    //linked list create ho chuki hai

    Node *head = first;
    Node *tail = fifth;
    cout<<"Printing the entire linked list before insertion"<<endl;
    printLL(head);
    
    //cout<<endl<<"The total nodes are "<<getLength(head)<<endl;

    insertAtHead(head, tail, 5); //inserting newNode with data = 5
    cout<<endl<<endl<<"Printing the entire linked list after insertion at beginning"<<endl;
    printLL(head);

    insertAtTail(head, tail, 500);
    cout<<endl<<endl<<"Printing the entire linked list after insertion at the end"<<endl;
    printLL(head);
    

    return 0;
}
