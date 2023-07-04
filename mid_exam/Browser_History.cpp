#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<string> browserList;
    while (true)
    {
        string history;
        cin >> history;
        if (history == "end")
            break;
        browserList.push_back(history);
    }
    int q;
    cin >> q;
    cin.ignore();
    auto it = browserList.end();
    while (q--)
    {
        string url;
        getline(cin, url);
        stringstream ss(url);
        string token;
        ss >> token;
        if (token == "visit")
        {
            ss >> token;
            auto h = find(browserList.begin(), browserList.end(), token);
            if (h == browserList.end())
                cout << "Not Available" << endl;
            else
            {
                it = h;
                cout << *it << endl;
            }
        }
        else if (token == "prev")
        {
            auto h = prev(it);
            if (h == browserList.end())
                cout << "Not Available" << endl;
            else
            {
                it = h;
                cout << *h << endl;
            }
        }
        else if (token == "next")
        {
            auto h = next(it);
            if (h == browserList.end())
                cout << "Not Available" << endl;
            else
            {
                it = h;
                cout << *h << endl;
            }
        }
    }

    return 0;
}