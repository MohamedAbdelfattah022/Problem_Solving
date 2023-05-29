// https://codeforces.com/contest/1800/problem/A
#include <bits\stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        string sound, s = "";
        cin >> sound;
        for (int i = 0; i < size; i++)
        {
            sound[i] = tolower(sound[i]);
        }

        if (sound[0] != 'm')
        {
            cout << "NO" << endl;
            continue;
        }
        s += sound[0];
        for (int i = 1; i < size; i++)
        {
            if (sound[i] != *(s.end() - 1))
                s += sound[i];
        }
        if (s == "meow")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        s = "";
    }
    return 0;
}