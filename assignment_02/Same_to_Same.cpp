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
    Node *headOne = NULL;
    Node *headTwo = NULL;
    while (true)
    {
        int x;
        cin >> x;
        if (x == -1)
            break;
        Node *newNode = new Node(x);
        if (headOne == NULL)
        {
            headOne = newNode;
        }
        else
        {
            Node *temp = headOne;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    while (true)
    {
        int x;
        cin >> x;
        if (x == -1)
            break;
        Node *newNode = new Node(x);
        if (headTwo == NULL)
        {
            headTwo = newNode;
        }
        else
        {
            Node *temp = headTwo;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    Node *tempOne = headOne;
    Node *tempTwo = headTwo;
    bool flag = true;
    while (true)
    {
        if (tempOne->val != tempTwo->val)
        {
            flag = false;
            break;
        }
        if (tempOne->next == NULL && tempTwo->next == NULL)
            break;

        if (tempOne->next != NULL)
            tempOne = tempOne->next;
        
        if (tempTwo->next != NULL)
            tempTwo = tempTwo->next;
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}