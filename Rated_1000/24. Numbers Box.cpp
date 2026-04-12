#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int> (m));
    int neg = 0;
    int sum=0;
    int mini = INT_MAX;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
            
            mini = min(mini,abs(v[i][j]));
            if(v[i][j]<0){
                neg++;
            }
            sum+=abs(v[i][j]);
            
        }
    }
    if(neg&1){
        cout<<sum-2*abs(mini)<<endl;
    }
    else{
        cout<<sum<<endl;
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