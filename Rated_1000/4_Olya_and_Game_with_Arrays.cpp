#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    int m;
    vector<ll> se;
    ll smallest = LLONG_MAX;
    ll sar=LLONG_MAX;
    for(int i=0;i<n;i++){
        cin>>m;
        vector<ll> a(m);
        for(int j=0;j<m;j++){
            cin>>a[j];
            sar = min(sar,a[j]);
        }
        if(n==1){
            cout<<sar<<endl;
            return;
        }
        sort(a.begin(), a.end());
        se.push_back(a[1]);
        smallest = min(smallest, a[0]);

    }
    
    ll ans=smallest;
    sort(se.begin(),se.end());
    for(int i = 1;i<se.size();i++){
        ans+=se[i];
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