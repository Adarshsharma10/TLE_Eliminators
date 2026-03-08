#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n,k;
    cin >>n>>k;
    string s;
    cin>>s;

    vector<ll> prefix(n+1,0);
    for(int i=0;i<n;i++){
        prefix[i+1]=prefix[i]+(s[i]=='W');
    }
    ll min_cell = INT_MAX;

    for(int i=0;i<=n-k;i++){
        ll diff = prefix[i+k]-prefix[i];
        min_cell = min(min_cell,diff);
    }
    cout<<min_cell<<endl;
    
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