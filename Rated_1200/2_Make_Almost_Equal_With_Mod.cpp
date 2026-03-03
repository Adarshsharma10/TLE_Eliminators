#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    int even=0,odd=0;
    for(auto & x: v){
        cin>>x;
    }
    ll ans=0;
    for(int i=1;i<=60;i++){
        set<ll> s;
        ll k = 1LL<<i;
        for(int j=0;j<n;j++){
            s.insert(v[j]%k);

        }
        if(s.size()==2){
            ans=k;
            break;
        }

    }
    cout<<ans<<endl;
    
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