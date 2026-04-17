#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    string s;
    cin>>s;

    string ans="";
    for(char c='a';c<='z';c++){
        if(s.find(c)==string::npos){
            ans=c;
            break;
        }
    }
    for(char c1='a';c1<='z';c1++){
        for(char c2='a';c2<='z';c2++){
            string tmp="";
            tmp.push_back(c1);
            tmp.push_back(c2);
            if(ans=="" && s.find(tmp)==string::npos){
                ans=tmp;
                break;
            }
        }
    }
    for(char c1='a';c1<='z';c1++){
        for(char c2='a';c2<='z';c2++){
            for(char c3='a';c3<='z';c3++){
                string tmp="";
                tmp.push_back(c1);
                tmp.push_back(c2);
                tmp.push_back(c3);
                if(ans=="" && s.find(tmp)==string::npos){
                    ans=tmp;
                    break;
                }
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