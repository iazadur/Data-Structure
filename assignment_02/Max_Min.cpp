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

int main()
{

    Node *head = NULL;
    while (true)
    {
        int x;
        cin >> x;
        if (x == -1)
            break;
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

    int max = INT_MIN;
    int min = INT_MAX;


    while (head != NULL)
    {
        if (head->val > max)
        {
            max = head->val;
        }
        if (head->val < min)
        {
            min = head->val;
        }
        
        head = head->next;
    }
    cout <<  max << ' ';
    cout << min << endl;

    return 0;
}