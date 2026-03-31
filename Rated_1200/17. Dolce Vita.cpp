#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    ll n,x;
    cin>>n>>x;
    vector<ll> v(n);
    for(auto &y : v){
        cin>>y;
    }
    sort(all(v));
    ll prevsum=0;
    ll total=0;
    for(ll i=0;i<n;i++){
        if(prevsum+v[i]<=x){
            ++total;
            ll op = (x-(prevsum+v[i]))/(i+1);
            total+=op;
            
        }
        prevsum+=v[i];
    }
    cout<<total<<endl;
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

// Successfully submitted