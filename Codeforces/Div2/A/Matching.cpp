// https://codeforces.com/contest/1821/problem/A
#include <bits\stdc++.h>
#include <array>
using namespace std;
using ll = long long;
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int ans = 1;
        for (int i = 0; i < s.size(); i++)
        {
            if (i == 0)
            {
                if (s.at(0) == '0')
                {
                    ans = 0;
                }
                else if (s.at(0) == '?')
                    ans *= 9;
            }
            else if (s.at(i) == '?')
            {
                if (i == 0)
                    ans *= 9;
                else
                    ans *= 10;
            }
        }
        cout << ans << endl;
    }

    return 0;
}