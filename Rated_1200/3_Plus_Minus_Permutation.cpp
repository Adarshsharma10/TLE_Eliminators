#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n,x,y;
    cin>>n>>x>>y;
    ll g=__gcd(x,y);
    ll l = (x/g)*y; 
    ll cnt = n/l;
    

    ll left = n/x;
    ll right = n/y;
   
    left = left - cnt;
    right = right - cnt;
   

    ll sum_x = (left*(n-left+1+n))/2; 

    ll sum_y = right*(right+1)/2;
    
    cout<<sum_x-sum_y<<endl;



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