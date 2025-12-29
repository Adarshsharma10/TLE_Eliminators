#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    string s;
    cin>>s;
    ll n = s.size();
    ll co=0,cz=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='0'){
            cz++;
        }
        else{
            co++;
        }
    }
    if(cz==co){
        cout<<0<<endl;
        return;
    }
    int t = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='0' && co>0){
            co--;
            t++;
        }
        else if(s[i]=='1' && cz>0){
            cz--;
            t++;
        }
        else{
            break;
        }
    }
    cout<<n-t<<endl;


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