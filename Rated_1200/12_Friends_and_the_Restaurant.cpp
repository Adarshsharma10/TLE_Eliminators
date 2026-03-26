#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<ll> x(n);
    vector<ll> y(n);
    vector<ll> diff(n);
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int i=0;i<n;i++){
        cin>>y[i];
    }
    int count_p=0;
    for(int i=0;i<n;i++){
        diff[i]=y[i]-x[i];
        if(diff[i]>=0){
            count_p++;
        }
    }
    sort(diff.begin(),diff.end());
    int l=0,r=n-1;
    while(l<=r){
        if(diff[l]>=0){
            break;
        }
        if(diff[l]+diff[r]>=0){
            count_p++;
            r--;
        }
        l++;
    }
    if(count_p==0) cout<<0<<endl;
    else cout<<count_p/2<<endl;
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