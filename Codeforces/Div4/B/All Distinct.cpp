// https://codeforces.com/contest/1692/problem/B
#include <bits\stdc++.h>

using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int e;
            cin >> e;
            s.emplace(e);
        }
        if ((n - s.size()) % 2 == 0)
        {
            cout << s.size() << endl;
        }
        else
        {
            cout << s.size() - 1 << endl;
        }
    }

    return 0;
}