#include <bits/stdc++.h>
using namespace std;

void call()
{
    string s;
    cin >> s;

    set<pair<int, char>> x, y, z;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'b')
        {
            if (x.size())
                x.erase(--x.end());
            continue;
        }
        if (s[i] == 'B')
        {
            if (y.size())
                y.erase(--y.end());
            continue;
        }
        if (s[i] >= 'a' && s[i] <= 'z')
            x.insert({i, s[i]});
        if (s[i] >= 'A' && s[i] <= 'Z')
            y.insert({i, s[i]});
    }

    for (auto e : x)
        z.insert(e);
    for (auto e : y)
        z.insert(e);

    for (auto [e, c] : z)
        cout << c;

    cout << "\n";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        call();
    }

    return 0;
}
