#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n,r,b;
    cin>>n>>r>>b;
    int blue = b;
    string s="";
    int p = r/(b+1);
    int q = r%(b+1);

    for(int i=0;i<b+1;i++){
        for(int j=0;j<p;j++){
            s+='R';
        }
        if(q>0){
            s+='R';
            q--;
        }
        if(i<b){
            s+='B';
        }
    }
    
    cout<<s<<endl;
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