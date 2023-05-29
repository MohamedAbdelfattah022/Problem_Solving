// https://codeforces.com/contest/1669/problem/B
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
        vector<int> v(n + 5);
        sort(v.begin(), v.end());
        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (++v[x] >= 3)
            {
                ans = x;
            }
        }

        cout << ans << endl;
    }

    return 0;
}