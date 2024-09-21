#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;

    // Numbers
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <i; j++)
        {
            cout <<" ";
        }
        for (int j = 0; j < n-i; j++)
        {
            cout << i+1;
        }
        cout << endl;
    }
    cout << endl;
    char ch = 'A';
    // Characters
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << ch;
        }
        ch++;
        cout << endl;
    }

    return 0;
}