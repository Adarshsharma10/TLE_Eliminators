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
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(__gcd(v[i],v[j])<=2){
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;

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