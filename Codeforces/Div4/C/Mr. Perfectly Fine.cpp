// https://codeforces.com/contest/1829/problem/C
#include <bits\stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
const int OO = 0x7e7e7e7e;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a = 2e9, b = 2e9, c = 2e9;
        for (int i = 0; i < n; i++)
        {
            int m;
            string s;
            cin >> m >> s;
            if (s == "00")
                continue;
            if (s == "11")
                c = min(c, m);
            if (s == "10")
                a = min(a, m);
            if (s == "01")
                b = min(b, m);
        }
        if (a == 2e9 || b == 2e9)
        {
            if (c == 2e9)
                cout << -1 << endl;
            else
                cout << c << endl;
        }
        else
        {
            cout << min(a + b, c) << endl;
        }
    }
    return 0;
}