#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    vector<int> v2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }
    vector<int> v3 = v2;
    v3.insert(v3.end(), v1.begin(), v1.end());
    for (int x: v3)
    {
        cout << x << " ";
    }
    
    return 0;
}