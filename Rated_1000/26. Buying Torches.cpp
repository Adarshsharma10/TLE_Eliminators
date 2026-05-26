#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    ll x,y,k;
    cin>>x>>y>>k;

    ll total_sticks = y*k + k;
    ll stick_trade = (total_sticks - 2)/(x-1);
    stick_trade++;
    cout<<stick_trade+k<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

// Successfully Submitted