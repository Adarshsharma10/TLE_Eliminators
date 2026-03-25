#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    string s;
    cin>>s;
    int z=0,o=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0') z++;
        else o++;
    }
    int op = min(z,o);
    if(op&1) cout<<"DA"<<endl;
    else cout<<"NET"<<endl;
    
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