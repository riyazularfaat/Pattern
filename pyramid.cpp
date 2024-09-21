#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;

    // Numbers
    for (int i = 1; i <= n; i++)
    {
        for (int j = n-i; j >=1; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = i-1; j >=1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
   
    return 0;
}