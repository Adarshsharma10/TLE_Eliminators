#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n,m;
    cin >>n>>m;
    string x,s;
    cin>>x;
    cin>>s;
    int ans=0;
    auto it = x.find(s);
    if(it!=string :: npos){
        cout<<ans<<endl;
        return;
    }
    while(true){
        ans++;
        x+=x;
        auto it = x.find(s);
        if(it!=string :: npos){
            cout<<ans<<endl;
            return;
        }
        if(x.size()> 2*m){
            break;
        }
    }
    cout<<-1<<endl;


    
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