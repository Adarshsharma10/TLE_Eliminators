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
    vector<int> ans;
    for(int i=0;i<n;i++){
        int s = 1,e = i+1;
        while(s<=e){
            int mid = (s+e)/2;
            if(v[i-mid+1]>=mid){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        ans.push_back(e);

    }
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