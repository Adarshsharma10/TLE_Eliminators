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
        vector<int> arr(n);
        int diff = 0;
        int maxVal = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        maxVal = arr[0];

        for (int i = 0; i < n - 1; i++)
        {
            diff = arr[i + 1] - arr[i];
            if (diff > maxVal)
            {
                maxVal = diff;
            }
        }

        int s = x - arr[n - 1]; // distance between last station to destination
        if (2 * s > maxVal)
        {
            cout << 2 * s << endl;
        }
        else
        {
            cout << maxVal << endl;
        }
    }
}

// Successfully submitted