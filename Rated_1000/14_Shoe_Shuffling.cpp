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
    map<int,int> freq;
    for(auto x : v){
        freq[x]++;
    }

    for(auto x : freq){
        if(x.second==1){
            cout<<-1<<endl;
            return;
        }
    }
    vector<int> ans;  
    int idx=0;
    for(int i=1;i<n;i++){
        if(v[i-1]==v[i]){
            
            ans.push_back(i+1);
        }
        else{
            ans.push_back(idx+1);
            idx=i;
        }
    }
    ans.push_back(idx+1);
    for(auto x : ans){
        cout<<x<<" ";
    }cout<<endl;
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