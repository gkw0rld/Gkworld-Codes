#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node()
    {
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        cout<<"Destructor called for: "<<this->data<<endl;
    }
};

int getLength(Node *head)
{
    Node *temp = head;
    int count = 0;

    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

void printLL(Node *head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
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

void deleteAtPosition (Node *&head, Node *&tail, int position)
{
    int length = getLength(head);

    if(head == NULL)
    {
        cout<<"Error! The LL is empty"<<endl;
        return;
    }

    if(head == tail)
    {
        //single element
        Node *temp = head;
        delete temp;
        head = NULL;
        tail = NULL;
    }

    if(position == 1)
    {
        //deletion from head
        Node *temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }

    else if (position == length)
    {
        //deletion from tail

        //find prev node
        Node *prev = head;
        while(prev->next != tail)
        {
            prev = prev->next;
        }

        //prev ka next NULL karo
        prev->next = NULL;

        //tail ko delete karo
        delete tail;

        //tail ko update karo
        tail = prev;
    }

    else
    {
        //deletion from middle

        //traverse prev and curr
        Node *prev = NULL;
        Node *curr = head;

        while(position != 1)
        {
            prev = curr;
            curr = curr->next;
            position--;
        }

        //prev ke next ko curr ke next pe set karo
        prev->next = curr->next;
        
        //curr ke next ko null karo // node isolate kardo
        curr->next = NULL;

        //curr ko delete kar do
        delete curr;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertAtTail(head, tail, 10);
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 40);
    insertAtTail(head, tail, 50);

    printLL(head);

    deleteAtPosition(head, tail, 1);
    printLL(head);
    
    return 0;
}