#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    int oper = n;
    vector<ll> v(n);
    for(auto &x : v) cin>>x;
    sort(v.begin(),v.end());
    
    vector<ll> pref(n);
    pref[0]=v[0];
    for(int i=1;i<n;i++){
        pref[i]=pref[i-1]+v[i];
    }
    vector<int> ans;
    ll score;
    for(int i=0;i<n;i++){
        ll cnt=0;
        score+=v[i];
        if(i>=1){
            cnt=i;
        }
        for(int j=i+1;j<n;j++){
            if(score>=v[j]){
                cnt++;
                score
            }
            else{
                ans.push_back(cnt);
                break;
            }
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

