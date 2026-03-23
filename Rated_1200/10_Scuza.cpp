#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    ll n,q;
    cin >>n>>q;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<ll> prefix(n+1,0);
    vector<ll> prefixmax(n);
    prefixmax[0]=v[0];
    for(int i=1;i<=n;i++){
        if(i<n){

            prefixmax[i]=max(v[i],prefixmax[i-1]);
        }
        prefix[i]=prefix[i-1]+v[i-1];
    }

    
    while(q--){
        ll x;
        cin>>x;
        int y = upper_bound(all(prefixmax),x)-prefixmax.begin();
        ll ans = prefix[y];
        cout<<ans<<" ";
    }cout<<endl;
    
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