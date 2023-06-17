#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 4, 6, 8, 9, 3, 5, 2, 4, 5, 2, 2, 3, 32, 1, 2, 3, 6, 2, 4, 5};
    // replace(v.begin(), v.end()-1, 5, 100);
    // for (int x : v)
    // {
    //     cout << x << " ";
    // }
    vector<int>::iterator it;
    it = find(v.begin(), v.end(), 1);
    if (it != v.end())
    {
        cout << "Element found at index " << it - v.begin() << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    return 0;
}