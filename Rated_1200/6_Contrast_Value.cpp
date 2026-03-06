#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x: v){
        cin>>x;
    }

    if(v.size()==1){
        cout<<1<<endl;
        return;
    }
    vector<int> ans;
    ans.push_back(v[0]);
    ans.push_back(v[1]);

    for(int i=2;i<n;i++){
        int s = ans.size();

        int x = ans[s-2]-ans[s-1];
        int y = ans[s-1]-v[i];

        if(x>0){
            if(y>0){
                ans[s-1]=v[i];
            }
            else if(y<0){
                ans.push_back(v[i]);
            }
        }
        else{
            if(y<0){
                ans[s-1]=v[i];
                
            }
            else if(y>0){
                ans.push_back(v[i]);
            }
        }
    }
    int final = ans.size();
    if(ans[0]==ans[1]){
        final--;
    }
    cout<<final<<endl;

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