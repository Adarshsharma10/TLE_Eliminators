#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        set<int> s(v.begin(),v.end());
        if(s.size()==1){
            cout<<"NO"<<endl;
            return;
        }
        cout<<"YES"<<endl;
        sort(v.begin(),v.end());
        cout<<v[n-1]<<" ";
        for(int i=0;i<n-1;i++){
            cout<<v[i]<<" ";
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