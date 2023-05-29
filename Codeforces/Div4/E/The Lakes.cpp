// https://codeforces.com/contest/1829/problem/E
#include <bits\stdc++.h>
using namespace std;
#define FIO ios ::sync_with_stdio(false), cin.tie(nullptr), cout.tie(NULL)
#define fill(container, value) fill(container.begin(), container.end(), value)
#define ll long long
#define endl "\n"
const int OO = 0x7e7e7e7e;

int row, col;
bool visited[1005][1005];
int mat[1005][1005];
bool valid(int r, int c)
{
    if (r < 0 || r > row || c < 0 || c > col || mat[r][c] == 0)
        return 0;
    return 1;
}

int dfs(int r, int c)
{
    int val = mat[r][c];
    if (visited[r][c] || !valid(r, c))
        return 0;

    visited[r][c] = 1;
    int x = val;
    if (valid(r, c))
        x += dfs(r, c - 1);
    if (valid(r, c))
        x += dfs(r, c + 1);
    if (valid(r, c))
        x += dfs(r - 1, c);
    if (valid(r, c))
        x += dfs(r + 1, c);
    return x;
}

int main()
{
    FIO;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    int t;
    cin >> t;

    while (t--)
    {
        int ans = 0;
        cin >> row >> col;
        for (int i = 1; i <= row; i++)
            for (int j = 1; j <= col; j++)
            {
                cin >> mat[i][j];
                visited[i][j] = 0;
            }

        for (int i = 1; i <= row; i++)
            for (int j = 1; j <= col; j++)
                if (!visited[i][j] && mat[i][j] != 0)
                    ans = max(ans, dfs(i, j));

        cout << ans << endl;
    }
    return 0;
}