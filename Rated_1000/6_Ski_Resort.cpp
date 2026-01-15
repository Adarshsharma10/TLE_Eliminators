#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n,k,q;
    cin >>n>>k>>q;
    vector<ll> a(n);
    for(auto &x: a){
        cin>>x;
        if(x<=q){
            x=1;
        }
        else{
            x=0;
        }
    }
    ll cnto=0;
    ll ways=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            cnto++;
        }
        else{
            if(cnto>=k){
                ll diff = cnto-k+1;
                ways+=(diff*(diff+1))/2;
            }
            cnto=0;
        }
    }
    if(cnto>=k){
        ll diff = cnto-k+1;
        ways+=(diff*(diff+1))/2;
    }
        
    cout<<ways<<endl;
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


//Successfully Submitted 
    
