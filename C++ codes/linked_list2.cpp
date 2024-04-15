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

void insertAtPosition(Node *&head, Node *&tail, int data, int position)
{
    if(position<1)
    {
        cout<<"Can't insert, please give another position"<<endl;
        return;
    }

    if(position == 1)
    {
        insertAtHead(head, tail, data);
    }

    int length = getLength(head);

    if(position>length+1)
    {
        cout<<"Can't insert, please give another position"<<endl;
        return ;
    }

    
    if(position == length+1)
    {
        insertAtTail(head, tail, data);
    }

    if(position > 1 && position<=length)
    {
        //create a node
        Node *newNode = new Node(data);

        //position se pehle wala ke next me newnode ka address add karo
        Node *temp=head;
        int i=1;

        while( i != position-1)
        {
            temp = temp->next;
            i++;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);

    //printLL(head);

    insertAtTail(head, tail, 100);
    cout<<endl;
    printLL(head);
    cout<<endl<<endl;

    insertAtPosition(head, tail, 69, 1);
    printLL(head);
    
    return 0;
}