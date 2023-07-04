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

void sorted_by_assending(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        Node *temp2 = temp->next;
        while (temp2 != NULL)
        {
            if (temp->val > temp2->val)
            {
                int t = temp->val;
                temp->val = temp2->val;
                temp2->val = t;
            }
            temp2 = temp2->next;
        }
        temp = temp->next;
    }
}

void delete_duplicated_value(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        Node *temp2 = temp->next;
        while (temp2 != NULL)
        {
            if (temp->val == temp2->val)
            {
                Node *del = temp2;
                temp2 = temp2->next;
                delete del;
            }
            else
            {
                break;
            }
        }
        temp->next = temp2;
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    sorted_by_assending(head);
    delete_duplicated_value(head);
    
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    return 0;
}