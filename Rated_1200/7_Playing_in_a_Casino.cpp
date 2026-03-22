#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n,m;
    cin>>n>>m;
    vector<vector<ll>> v(m,vector<ll> (n));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[j][i];
        }
    }
    if(n==1){
        cout<<0<<endl;
        return;
    }
    for(int i=0;i<m;i++){
        sort(v[i].begin(),v[i].end());
    }
    ll sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum-=(v[i][j]*(n-j-1));
            sum+=(v[i][j]*j);
        }
    }
    cout<<sum<<endl;   
    
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