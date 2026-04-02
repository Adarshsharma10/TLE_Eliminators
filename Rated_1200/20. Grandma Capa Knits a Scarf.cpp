#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    string s;
    cin>>s;
    char check1,check2;
    for(int i=0;i<n;i++){
        if(s[i]!=s[n-1-i]){
            check1=s[i];
            check2=s[n-1-i];
            break;
        }
    }
    int l=0,r=n-1;
    int ans1=0,ans2=0;
    bool flag1 = true;
    bool flag2 = true;
    while(l<=r){
        if(s[l]==s[r]){
            l++;
            r--;
        }
        else if(s[l]!=s[r]){
            if(s[l]==check1){
                ans1++;
                l++;
            }
            else if(s[r]==check1){
                ans1++;
                r--;
            }
            else{
                flag1=false;
                break;
            }
        }
    }
    l=0,r=n-1;
    while(l<=r){
        if(s[l]==s[r]){
            l++;
            r--;
        }
        else if(s[l]!=s[r]){
            if(s[l]==check2){
                ans2++;
                l++;
            }
            else if(s[r]==check2){
                ans2++;
                r--;
            }
            else{
                flag2 =false;
                break;
            }
        }
    }
    if(!flag1 && !flag2){
        cout<<-1<<endl;
    }
    else if(!flag1 && flag2){
        cout<<ans2<<endl;
    }
    else if(flag1 && !flag2){
        cout<<ans1<<endl;
    }
    else{
        cout<<min(ans1,ans2)<<endl;
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

// Successfully submitted