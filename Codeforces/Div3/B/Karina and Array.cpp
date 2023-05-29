// https://codeforces.com/contest/1822/problem/B
#include <bits\stdc++.h>
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
        int n;
        cin >> n;
        vector<ll> v(n);

        for (auto &it : v)
            cin >> it;

        sort(v.begin(), v.end());
        ll minTwo = v.at(0) * v.at(1);
        ll maxTwo = v.at(n - 2) * v.at(n - 1);

        cout << ((minTwo > maxTwo) ? minTwo : maxTwo) << endl;
    }

    return 0;
}