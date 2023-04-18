#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // Destructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is Free for node with data" << value << endl;
    }
};

// reference is taken so as to make changes in original ll and not a copy
void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp; // tail ka next should point to temp
    tail = temp;       // new tail
}
void insertAtPosition(Node *head, Node *tail, int position, int data)
{
    // when position==1;
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // when inserting at last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }

    Node *nodetoInsert = new Node(data);
    nodetoInsert->next = temp->next;
    temp->next = nodetoInsert;
}

void print(Node *&head)
{
    Node *temp = head; // this is done so that head is not changed.we store it in temp and make changes
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

void deletion(Node *&head, int position)
{
    if (position == 1)
    {
        // deleting first or start node
        Node *temp = head;
        head = head->next;
        // memory free start node
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle node or last node
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    Node *node1 = new Node(6);
    // cout << node1->data;
    // cout << node1->next;

    Node *head = node1;
    Node *tail = node1;
    // print(head);
    print(tail);
    // insertAtHead(head, 12);
    // print(head);

    // insertAtHead(head, 24);
    // print(head);

    // insertAtTail(tail, 5);
    // print(head);
    // insertAtTail(tail, 7);
    // print(head);
    insertAtPosition(head, tail, 2, 25);
    print(head);

    deletion(head, 2);
    print(head);
    return 0;
}