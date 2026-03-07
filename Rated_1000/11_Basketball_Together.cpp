#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    ll n,d;
    cin>>n>>d;
    vector<int> p(n);
    for(auto &x : p){
        cin>>x;
    }
    sort(p.rbegin(),p.rend());

    int l = 0,r=n-1;
    int win=0;
    while(l<=r){
        ll need = (d/p[l])+1;
        if(r - (need - 1) < l) break;
        
        r=r-(need-1);
        win++;
        l++;

    }
    cout<<win<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}

// Successfully Submitted