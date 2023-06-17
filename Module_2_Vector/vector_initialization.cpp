#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v; // empty vector of size 0
    // vector<int> v(5); // vector of size 5 with all elements 0
    // vector<int> v(5, 10); // vector of size 5 with all elements 10
    // vector<int> v2(5, 100);
    // vector<int> v(v2); // copy of v2
    int a[4] = {12, 13, 14, 15};
    vector<int> v(a, a + 4);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << v[3] << endl;

    return 0;
}