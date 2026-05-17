#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    ll n,x;
    cin >>n>>x;
    ll max = 0;
    ll sum=0;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        double y = (double)v[i]/x;
        max+=ceil(y);
        sum+=v[i];
    }
    double z = (double)sum/x;
    cout<<(ll)ceil(z)<<" "<<max<<endl;
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