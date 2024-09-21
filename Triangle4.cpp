#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;
    int num = 1;
    // Numbers
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    cout << endl;

    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {

            cout << ch << " ";
            ch++;
        }

        cout << endl;
    }

    return 0;
}