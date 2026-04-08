#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    map<ll,ll> freq;
    for(int i=0;i<n;i++){
        freq[v[i]-i]++;
    }
    ll cnt=0;
    ll ans=0;
    for(auto &x : freq){
     
        cnt=x.second;
        
        ans+=(cnt*(cnt-1))/2;
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