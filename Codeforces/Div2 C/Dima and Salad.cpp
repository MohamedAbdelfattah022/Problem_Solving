#include <bits/stdc++.h>
using namespace std;
#define FIO ios ::sync_with_stdio(false), cin.tie(nullptr), cout.tie(NULL)
#define fill(container, value) fill(container.begin(), container.end(), value)
#define memset(arr, value) memset(arr, value, sizeof(arr))
#define ll long long
#define endl "\n"
const int OO = 0x3f3f3f3f;

int n, k;
const int safeIndx = 100005;
const int Size = 3e5 + 100;
int taste[105], calories[105];
int dp1[105][Size];
int dp2[105][Size];

bool track(int i, int sum)
{
    if (i == n)
        return sum == 0;
    int &ret = dp1[i][sum + safeIndx];
    if (~ret)
        return ret;
    ret = track(i + 1, sum);
    ret |= track(i + 1, sum + taste[i] - k * calories[i]);
    return ret;
}

int solve(int i, int sum)
{
    if (i == n)
        return 0;

    int &ret = dp2[i][sum + safeIndx];
    if (~ret)
        return ret;

    if (track(i + 1, sum))
        ret = solve(i + 1, sum);
    if (track(i + 1, sum + taste[i] - k * calories[i]))
        ret = max(ret, solve(i + 1, sum + taste[i] - k * calories[i]) + taste[i]);
    return ret;
}

int main()
{
    FIO;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif

    cin >> n >> k;
    memset(dp1, -1);
    memset(dp2, -1);
    for (int i = 0; i < n; i++)
    {
        cin >> taste[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> calories[i];
    }

    int ans = solve(0, 0);
    cout << ((ans <= 0) ? -1 : ans);

    return 0;
}
/*
sum(ai)
--------   =    k
sum(bi)

sum(ai) = k*sum(bi)


sum(ai) - k*sum(bi) = 0

index, sum(taste(i)) - k*sum(calories(i))


- k*sum(calories(i)) <= x <= sum(taste(i))

- 1e5       <= x <= 1e4


leave solve(idx+1, sum)
pick solve(idx+1, sum + a[i] - k * b[i])

base case:
if(sum = 0)	return 1;
else		return 0;
*/