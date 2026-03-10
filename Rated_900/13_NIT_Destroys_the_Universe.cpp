#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x : v){
        cin>>x;
    }
    int cnt = 0;
    bool fz=false;
    int curr=0;
    for(int i=0;i<n;i++){
        if(v[i]>0){
            fz = true;
            continue;
        }
        else if(fz){
            cnt++;
            fz = false;
        }
    }
    if(fz){
        cnt++;
    }
    cout<<min(cnt,2)<<endl;
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