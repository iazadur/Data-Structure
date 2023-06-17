#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    };
};

void insert_a_value(Node *&head, Node *&tail, int x)
{
    Node *newNode = new Node(x);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void reverse_on_right(Node *&head)
{

    if (head == NULL)
        return;

    reverse_on_right(head->next);
    cout << head->val << ' ';
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int x;
        cin >> x;
        if (x == -1)
            break;
        insert_a_value(head, tail, x);
    }

    reverse_on_right(head);
    cout << endl;

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << ' ';
        temp = temp->next;
    }

    return 0;
}