#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()



void solve() {
    int n;
    cin >> n;
    string t;
    cin>>t;
    
    vector<bool> isdeleted(n+1,false);
    ll cost =0;
    
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            if(t[j-1]=='1') break;
            else{
                if(isdeleted[j]){
                    continue;
                }
                else{
                    isdeleted[j]=true;
                    cost+=i;
                }
            }
        }
    }
    cout<<cost<<endl;

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