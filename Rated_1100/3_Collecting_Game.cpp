#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    int oper = n;
    vector<ll> c(n);
    for(auto &x : c) cin>>x;
    vector<ll> v(c.begin(),c.end());
    sort(v.begin(),v.end());
    
    vector<ll> pref(n+1,0);
    for(int i=1;i<=n;i++){
        pref[i]=pref[i-1]+v[i-1];
    }

    vector<ll> ans(n);
    ans[n-1]=n-1;

    for(int i=n-2;i>=0;i--){
        if(pref[i+1]>=v[i+1]){
            ans[i]=ans[i+1];
        }
        else{
            ans[i]=i;
        }
    }

    map<ll, int> p;
    for(int i = 0; i < n; i++) {
        p[v[i]] = ans[i];
    }

    for(int i = 0; i < n; i++) {
        cout << p[c[i]] << (i == n - 1 ? "" : " ");
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