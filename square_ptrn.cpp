#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= n; j++)
        {
            // cout << j << " "; //Numbers

            cout << ch << " "; // character
            ch++;

            // cout << "* "; //Stars
        }
        cout << endl;
    }

    return 0;
}