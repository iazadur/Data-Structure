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

void insert_at_tail(Node *&head, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void insert_at_any_position(Node *&head, int val, int pos)
{
    Node *n = new Node(val);
    if (pos == 0)
    {
        n->next = head;
        head = n;
        return;
    }
    Node *temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    n->next = temp->next;
    temp->next = n;
}

void delete_from_pointer(Node *&head, int pos)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *temp2 = temp->next;
    temp->next = temp->next->next;
    delete temp2;
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        int option;
        cout << "1. Insert at tail" << endl;
        cout << "2. Print linked list" << endl;
        cout << "3. Insert at any position" << endl;
        cout << "4. Delete from pointer" << endl;
        cout << "5. Exit" << endl;
        cin >> option;
        if (option == 1)
        {
            int val;
            cout << "Enter value to insert at tail: ";
            cin >> val;
            insert_at_tail(head, val);
        }
        else if (option == 2)
        {
            print_linked_list(head);
        }
        else if (option == 3)
        {
            int val, pos;
            cout << "Enter value to insert: ";
            cin >> val;
            cout << "Enter position to insert: ";
            cin >> pos;
            insert_at_any_position(head, val, pos);
        }
        else if (option == 4)
        {
            int pos;
            cout << "Enter position to insert: ";
            cin >> pos;
            delete_from_pointer(head, pos);
        }
        else if (option == 5)
        {
            break;
        }
        else
        {
            cout << "Invalid option" << endl;
        }
    }

    return 0;
}