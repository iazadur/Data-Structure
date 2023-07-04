#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    };
};

void print_normal(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}


void insert_at_any_position(Node *head, int pos, int val)
{
    Node *temp = head;
    Node *new_node = new Node(val);
    int count = 1;
    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }
    new_node->next = temp->next;
    new_node->prev = temp;
    temp->next = new_node;
    new_node->next->prev = new_node;
}

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    Node *tail = c;
    int pos = 4;
    int val = 25;
    insert_at_any_position(head, pos, val);
    print_normal(head);
    return 0;
}