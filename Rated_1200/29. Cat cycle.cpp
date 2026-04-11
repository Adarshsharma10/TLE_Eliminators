#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    ll n,k;
    cin>>n>>k;
    ll ans=0;
    if(n&1){
        ll skip_steps=n/2;
        if(k%skip_steps==0){
            ans+=(k/skip_steps)-1;
        }
        else{
            ans+=(k/skip_steps);
        }
        
        if((k+ans)%n==0){
            cout<<n<<endl;
        }
        else{
            cout<<(k+ans)%n<<endl;
        }
    }
    else{
        if(k%n==0){
            cout<<n<<endl;
        }
        else{
            cout<<k%n<<endl;
        }
    }
    
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