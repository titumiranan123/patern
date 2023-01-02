#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c;
    cin >> c;
    int count = 1;
    for (int i = 1; i <= c; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count<<" ";
            count++;
        }
        cout << '\n';
    }
}