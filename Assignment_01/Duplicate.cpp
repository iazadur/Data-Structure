#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        vector<int>::iterator it;
        it = find(v.begin() + 1 + i, v.end(), v[i]);
        if (it != v.end())
        {
            flag = true;
        }
        }
    if (flag)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}