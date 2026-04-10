#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve(){
    string s;
    cin>>s;
    int n=s.size();
    if(s[0]==s[n-1]){
        cout<<s<<endl;
        return;
    }
    else{
        if(s[0]=='a'){
            s[0]='b';
        }
        else{
            s[0]='a';
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

// Successfully submitted