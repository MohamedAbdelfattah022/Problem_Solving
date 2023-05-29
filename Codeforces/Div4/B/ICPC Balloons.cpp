// https://codeforces.com/contest/1703/problem/B
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int testcases, length, c = 0;
    string str;
    cin >> testcases;
    while (testcases--)
    {
        int arr[26] = {};
        c = 0;
        cin >> length;
        cin >> str;
        for (int i = 0; i < length; i++)
        {

            if (arr[str[i] - 'A'] == 0)
            {
                arr[str[i] - 'A'] += 2;
            }
            else
            {
                arr[str[i] - 'A'] += 1;
            }
        }
        for (int i = 0; i < 26; i++)
        {
            c += arr[i];
        }
        cout << c << endl;
    }
    return 0;
}