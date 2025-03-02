#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int maxi = arr[0];
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i + 1] - arr[i] > maxi)
            {
                maxi = arr[i + 1] - arr[i];
            }
        }
        int temp = x - arr[n - 1];
        if (temp * 2 > maxi)
        {
            maxi = temp * 2;
        }
        cout << maxi << endl;
    }
    return 0;
}