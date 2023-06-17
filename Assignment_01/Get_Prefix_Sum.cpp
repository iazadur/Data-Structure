#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
   }

   long long prefix[n];
   prefix[0] = a[0];
   for (int i = 1; i < n; i++)
   {
        prefix[i] = prefix[i - 1] + a[i];
    }
    reverse(prefix, prefix + n);
    for (int i = 0; i < n; i++)
    {
        cout << prefix[i] << " ";
    }

    return 0;
}