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
    int ans=0;
    for(int i=0;i<n;i++){
        ans^=v[i];
    }
    if(n&1){
        cout<<ans<<endl;
    }
    else{
        if(ans==0){
            cout<<0<<endl;
        }
        else{
            cout<<-1<<endl;
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

// Successfully Submission