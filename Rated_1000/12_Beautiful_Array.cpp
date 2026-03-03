#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n,k,b,s;
    cin>>n>>k>>b>>s;

    ll min_sum = k*b;
    ll max_sum = k*b + n*(k-1);

    if(s < min_sum || s > max_sum){
        cout<<-1<<"\n";
        return;
    }

    vector<ll> a(n,0);

    a[0] = k*b;
    s -= k*b;

    for(int i=0;i<n && s>0;i++){
        ll add = min(s, k-1);
        a[i] += add;
        s -= add;
    }

    for(ll x : a) cout<<x<<" ";
    cout<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--) solve();
}

// Successfully Submitted