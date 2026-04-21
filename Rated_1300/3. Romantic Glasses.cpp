#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    } 
    vector<ll> prefixeven(n,0),prefixodd(n,0);
    prefixodd[0]=v[0];
    prefixeven[0]=0;
    bool flag = false;
    map<ll int,int> cnt;
    cnt[prefixeven[0] - prefixodd[0]]++;
    for(int i=1;i<n;i++){
        prefixodd[i]+=prefixodd[i-1];
        prefixeven[i]+=prefixeven[i-1];

        if(i&1){
            prefixeven[i]+=v[i];
        }
        else{
            prefixodd[i]+=v[i];
        }
        ll diff = prefixeven[i]-prefixodd[i];
        cnt[diff]++;
        if(cnt[diff]==2 || diff==0){
            flag=1;
            break;
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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