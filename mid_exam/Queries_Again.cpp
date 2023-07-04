#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    };
};

int size(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
    return;
}

void insert_at_any_position(Node *&head, Node *&tail, int pos, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    if (pos == 0)
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return;
    }
    if (pos == size(head))
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        return;
    }
    Node *temp = head;
    while (--pos)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
    return;
}

int main()
{
    int q;
    cin >> q;
    Node *head = NULL;
    Node *tail = NULL;
    while (q--)
    {
        int pos,val;
        cin >> pos >> val;
        int n = size(head);
        if(pos > n)
        {
            cout << "Invalid" << endl;
            continue;
        }
        insert_at_any_position(head, tail, pos, val);
        Node *temp = head;
        cout << "L -> ";
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
        Node *temp2 = tail;
        cout << "R -> ";
        while (temp2 != NULL)
        {
            cout << temp2->val << " ";
            temp2 = temp2->prev;
        }
        cout << endl;
    }
   
    
    return 0;
}