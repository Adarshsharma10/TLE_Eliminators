#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    char c;
    cin>>n>>c;
    string s;
    cin>>s;
    string k = s+s;
    int ans=0;
    int green=-1;

    for(int i=k.size()-1;i>=0;i--){
        if(k[i]=='g'){
            green=i;
        }

        if(i<n && k[i]==c){
            if(green!=-1){

                ans=max(green-i,ans);
            }
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