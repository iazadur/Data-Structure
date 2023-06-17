#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v, v + n);
    while (q--)
    {
        bool flag = false;
        int x;
        cin >> x;
        int l = 0, r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (v[mid] == x)
            {
                flag = true;
                break;
            }
            else if (v[mid] > x)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        flag ? cout << "found" << endl : cout << "not found" << endl;
    }

    return 0;
}