#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n,k;
    cin>>n>>k;
    vector<ll> a(n);
    vector<ll> b(n);
    for(auto &x : a) cin>>x;
    for(auto &x : b) cin>>x;

    ll ans;
    int s = a[0];
    ll m = a[0]+(k-1)*b[0];
    ll q = b[0];
    for(int i=1;i<min(n,k);i++){
        s+=a[i];
        q = max(q,b[i]);
        ans=s+(k-1-i)*q;
        m=max(ans,m);

    }
    cout<<m<<endl;
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