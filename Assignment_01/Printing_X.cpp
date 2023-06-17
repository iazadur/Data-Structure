#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    int s = 0, e = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s == j && e == j)
            {
                cout << 'X';
            }
            else if (s == j)
            {
                cout << '\\';
            }
            else if (e == j)
            {
                cout << '/';
            }

            else
            {
                cout << ' ';
            }
        }
        s++;
        e--;
        cout << endl;
    }

    return 0;
}