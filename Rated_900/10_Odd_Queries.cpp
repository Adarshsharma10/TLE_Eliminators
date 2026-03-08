#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        ll l,r,k;
        vector<ll> prefix(n+1,0);
        for(int i=0;i<n;i++){
            prefix[i+1]=prefix[i]+v[i];
        }
        ll sum = accumulate(v.begin(),v.end(),0LL);
        while(q--){
            cin>>l>>r>>k;
            int diff = prefix[r]-prefix[l-1];
            int m = r-l+1;
            int ans = sum-diff+(m*k);
            if(ans&1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }



        }



    }
}