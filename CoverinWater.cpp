#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int counter = 0;
        for (int i = 0; i < n; i++)
        {
            if (i > 0 && i < n - 1 && str[i] == '.' && str[i - 1] == '.' && str[i + 1] == '.')
            {
                counter = 2;
                break;
            }
            else if (str[i] == '.')
            {
                counter++;
            }
        }
        cout << counter << endl;
    }
    return 0;
}