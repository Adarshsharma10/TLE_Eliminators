#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x :v){
        cin>>x;
    }
    ll sum = v[0];
    ll max_sum=v[0];
    for(int i=1;i<n;i++){
        
        if (abs(v[i] % 2) != abs(v[i-1] % 2) && sum > 0){
            sum+=v[i];
        }
        else{
            sum=v[i];
        }
        max_sum = max(max_sum, sum);
    }
    cout<<max_sum<<endl;
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