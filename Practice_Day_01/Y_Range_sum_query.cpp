#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, q;
    cin >> n >> q;
   long long v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    long long pre[n];
    pre[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }
    while (q--)
    {
        long long l, r;
        cin >> l >> r;
        l--;
        r--;
        long long sum = 0;
        l == 0 ? sum = pre[r] : sum = pre[r] - pre[l - 1];
        cout << sum << endl;
    }

    return 0;
}