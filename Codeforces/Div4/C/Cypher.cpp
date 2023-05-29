// https://codeforces.com/contest/1703/problem/C
#include <bits\stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // summation => (wheelNum + n) % 10;
    // subtraction => (wheelNum - n + 10) % 10;

    int addCount = 0, subCount = 0;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int *a = new int[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            int mov;
            cin >> mov;
            string s;
            cin >> s;
            int add = count(s.begin(), s.end(), 'D');
            int sub = count(s.begin(), s.end(), 'U');
            a[i] += add % 10;
            a[i] = ((a[i] - sub) + 10) % 10;
        }
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }

    return 0;
}