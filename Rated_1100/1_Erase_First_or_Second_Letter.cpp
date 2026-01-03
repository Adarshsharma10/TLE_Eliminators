#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    string s;
    cin>>s;
    int ans = 1;
    vector<int> freq(n);
    vector<int> seen(26,0);
    int distinct = 0;
    for(int i=0;i<n;i++){
        int idx = s[i]-'a';
        if(!seen[idx]){
            seen[idx]=1;
            distinct++;
        }
        freq[i]=distinct;
    }

    for(int i=1;i<n;i++){
        int q = n - (n-1-i);
        ans+=freq[q-1];
    }
    cout<<ans<<endl;
    
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