#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int t;
        cin >> t;
        vector<int> v(t);
        for (int i = 0; i < t; i++)
        {
            cin >> v[i];
        }
        vector<int> v2(t);
        v2 = v;
        sort(v2.begin(), v2.end());
        bool flag = true;
        for (int i = 0; i < t; i++)
        {
            if (v[i] != v2[i])
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}