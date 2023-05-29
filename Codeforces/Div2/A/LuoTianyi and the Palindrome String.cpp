// https://codeforces.com/contest/1825/problem/A
#include <bits\stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
const int OO = 0x7e7e7e7e;

bool isPalindrome(string &str)
{
    string rev = str;
    reverse(rev.begin(), rev.end());

    return (str == rev);
}
string s;

int solve(string &s)
{
    int n = s.size();
    char ch = s.at(0);
    int i = 1;
    for (i = 1; i < n; i++)
        if (s.at(i) != ch)
            break;

    if (i == n)
        return -1;

    if (isPalindrome(s))
        return n - 1;
    return n;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {

        cin >> s;
        cout << solve(s) << endl;
    }
    return 0;
}