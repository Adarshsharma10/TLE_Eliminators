#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for(auto &x : p){
        cin>>x;
    }
    int k = abs(p[0]-1);
    
    for(int i=0;i<n;i++){
        k = __gcd(k, abs(p[i] - (i + 1)));
    }
    cout<<k<<endl;
    
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