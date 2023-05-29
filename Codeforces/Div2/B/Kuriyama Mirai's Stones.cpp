// https://codeforces.com/contest/433/problem/B
#include <bits\stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

ll sum(ll s, ll e, vector<ll> &v)
{
    if (s == 0)
        return v[e];
    else
        return v[e] - v[s - 1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ///

    ll s;
    cin >> s;
    vector<ll> v, u, preSum(s + 5, 0), preSum2(s + 5, 0);
    for (ll i = 0; i < s; i++)
    {
        ll e;
        cin >> e;
        v.push_back(e);
        u.push_back(e);
        if (i == 0)
            preSum[i] = v[i];
        else
        {
            preSum[i] += preSum[i - 1] + v[i];
        }
    }

    sort(u.begin(), u.end());
    for (ll i = 0; i < s; i++)
    {
        if (i == 0)
            preSum2[i] = u[i];
        else
        {
            preSum2[i] += preSum2[i - 1] + u[i];
        }
    }

    ll t;
    cin >> t;
    while (t--)
    {
        int type, s, e;
        cin >> type >> s >> e;

        if (type == 1)
        {
            if (s == 1)
            {
                cout << preSum[e - 1] << endl;
                continue;
            }
            cout << preSum[e - 1] - preSum[s - 2] << endl;
        }
        else
        {
            if (s == 1)
            {
                cout << preSum2[e - 1] << endl;
                continue;
            }
            cout << preSum2[e - 1] - preSum2[s - 2] << endl;
        }
    }

    return 0;
}