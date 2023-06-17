#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    vector<int> x = {1, 2, 3, 4, 5};
    x = v;
    x.pop_back();
    x.push_back(60);
    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << " ";
    }

    return 0;
}