#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    map<int, int> cnt;
    for (int i = 0; i < n; i++)
        cnt[v[i]]++;

    int ans = 0;

    for (auto &p : cnt)
    {
        int ele = p.first;
        int fre = p.second;

        int prev = 0;
        auto it = cnt.find(ele - 1);
        if (it != cnt.end())
            prev = it->second;

        if (fre > prev)
            ans += (fre - prev);
    }

    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}

// Successfully Submitted