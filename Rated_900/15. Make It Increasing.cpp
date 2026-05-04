#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ans=0;
    for(int i=n-1;i>0;i--){
        while(true){
            if(v[i]<=v[i-1]){
                if(v[i-1]/2==v[i-1]){
                    cout<<-1<<endl;
                    return;
                }
                v[i-1]=v[i-1]/2;
                ans++;
            }
            else break;
        }
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

// Successfully Submitted