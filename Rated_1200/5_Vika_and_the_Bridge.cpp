#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve()
{
    int k, n;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &x : v)
    {
        cin >> x;
    }

    vector<int> colors[k + 1];

    for (int i = 1; i <= k; i++)
    {
        colors[i].push_back(0);
    }
    for (int i = 0; i < n; i++)
    {
        colors[v[i]].push_back(i + 1);
    }
    for (int i = 1; i <= k; i++)
    {
        colors[i].push_back(n + 1);
    }

    priority_queue<int> jumps[k + 1];
    int ans = INT_MAX;
    for (int i = 1; i <= k; i++)
    {
        for (int j = 0; j < colors[i].size() - 1; j++)
        {
            jumps[i].push(colors[i][j + 1] - colors[i][j] - 1);
        }
        int max_val = jumps[i].top();
        jumps[i].pop();
        if (max_val % 2 == 0)
        {
            jumps[i].push(max_val / 2);
            jumps[i].push((max_val / 2) - 1);
        }
        else
        {
            jumps[i].push(max_val / 2);
            jumps[i].push(max_val / 2);
        }
        ans = min(ans, jumps[i].top());
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

// Successfully Submitted
