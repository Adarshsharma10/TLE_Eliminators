#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    ll n,x,y;
    cin >>n>>x>>y;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll ans = 0;
    map<pair<int,int>,int> mp;
    for(int i=0;i<n;i++){
        int curr_x = v[i]%x;
        int curr_y = v[i]%y;
        int target_x = (x-curr_x)%x;
        int target_y = curr_y;
        if(mp.count({target_x,target_y})){
            ans+=mp[{target_x,target_y}];
        }
        mp[{curr_x,curr_y}]++;
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

// Successfully submitted