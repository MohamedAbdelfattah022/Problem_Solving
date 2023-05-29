// https://codeforces.com/contest/69/problem/A
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

    int n, x = 0, y = 0, z = 0, a, b, c;
    for (cin >> n; n--; x += a, y += b, z += c)
        cin >> a >> b >> c;
    (x == 0 && y == 0 && z == 0) ? cout << "YES\n" : cout << "NO\n";

    return 0;
}