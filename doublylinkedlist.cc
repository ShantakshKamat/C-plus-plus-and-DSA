#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    };

    ~Node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory free for node with data " << val << endl;
    }
};

// insert at head
void insertAtHead(Node *&head, Node *&tail, int data)
{                     // create temp node
    if (head == NULL) // EXTREME PROBLEMS
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp; // temp will be the new head;
    }
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (tail == NULL) // EXTREME PROBLEMS
    {
        Node *temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}
void insertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    // when position==1;
    if (position == 1)
    {
        insertAtHead(head, tail, data);
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
        insertAtTail(head, tail, data);
        return;
    }

    Node *nodetoInsert = new Node(data);
    nodetoInsert->next = temp->next;
    temp->next->prev = nodetoInsert;
    temp->next = nodetoInsert;
    nodetoInsert->prev = temp;
}
void deletion(Node *&head, int position)
{
    if (position == 1)
    {
        // deleting first or start node
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp; // free the temp node;
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
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

// traversing a linked list
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

// length of the LL use same code as traversal with small change
int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

int main()
{
    Node *n1 = new Node(10);
    Node *head = n1;
    Node *tail = n1;
    // cout << getLength(head) << endl;
    print(head);

    // head insertion
    // insertAtHead(head, 11);
    // insertAtHead(head, 15);
    // print(head);

    // at tail insertion
    insertAtTail(head, tail, 1);
    print(head);
    insertAtTail(head, tail, 2);
    print(head);

    insertAtPosition(head, tail, 2, 23);
    print(head);

    deletion(head, 4);
    print(head);
    return 0;
}
