#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;

    //Numbers
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i+1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    //Characters
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 1; j < i + 1; j++)
        {
            cout << ch << " ";
            ch++;
        }

        cout << endl;
    }
    cout << endl;
    // Stars
    for(int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i+1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}