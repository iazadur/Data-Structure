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

int Size(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}
void insert_a_value(Node *&head, int x)
{
    Node *newNode = new Node(x);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void sort_descending(Node *&head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        int x;
        cin >> x;
        if (x == -1)
            break;
        insert_a_value(head, x);
    }

    sort_descending(head);
    
    

    if (head->next == NULL)
    {
        cout << head->val << " ";
    }
    else
    {
    int mid = Size(head) / 2;
    Node *temp = head;
        while (--mid)
        {
            temp = temp->next;
        }
        if (Size(head) % 2 == 0)
        {
            cout << temp->next->val << " ";
            cout << temp->val << " ";
        }
        else
        {
            cout << temp->next->val << " ";
        }
    }


    return 0;
}