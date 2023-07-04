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
    tail = newNode;
    return;
}

void reverse(Node *&head, Node *cur)
{
    if (cur->next == NULL)
    {
        head = cur;
        return;
    }
    reverse(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *newHead = NULL;
    Node *newTail = NULL;
    while (true)
    {
        int x;
        cin >> x;
        if (x == -1)
            break;
        insert_tail(head, tail, x);
        insert_tail(newHead, newTail, x);
    }
    reverse(newHead, newHead);
    Node *temp = head;
    Node *temp2 = newHead;
    bool flag = true;
    while (temp != NULL)
    {
        if (temp->val != temp2->val)
        {
            flag = false;
            break;
        }
        temp = temp->next;
        temp2 = temp2->next;
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}