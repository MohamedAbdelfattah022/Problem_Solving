// https://codeforces.com/contest/1703/problem/A
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, counter = 0;
    cin >> n;
    string str;
    while (n--)
    {
        cin >> str;

        if (str[0] == 'Y' || str[0] == 'y')
            counter++;
        if (str[1] == 'E' || str[1] == 'e')
            counter++;
        if (str[2] == 'S' || str[2] == 's')
            counter++;

        (counter == 3) ? cout << "YES" << endl : cout << "NO" << endl;
        counter = 0;
    }

    return 0;
}